#include <stdio.h>
#include <time.h>
#include <stdlib.h>


char intToCharacter(int);
void controller(int*, int*, int*, int*, int);
void passGenerator(int*, char*, char*);

int main() {

  int intBuffer = 0;
  int charBuffer = 0;

  int  randInt; 
  int  randChar;
  int  pass[25];
  int  charBuff[25];
  char passChar[25];

  char passWord[54];

  srand(time(NULL));

  for (int i=0; i < 25; i++) {
    randInt = rand() % 50;
    randChar = rand() % 25;

    controller(&randInt, &randChar, &pass[0], &charBuff[0], i);

    charBuff[i] = randChar;
    passChar[i] = (char)intToCharacter(randChar);
    pass[i] = randInt;
    printf("The number is %i\n", pass[i]);
    printf("The character is: %c\n", passChar[i]);
  }

  for (int i=0; i< 25; i++) {
    printf("%i -> [%i,  %c]\n", i, pass[i], passChar[i]);
  }

  passGenerator(&pass[0], &passChar[0], &passWord[0]);
  printf("Passwort: ");
  for (int i=0; i < 54; i++) {
    printf("%c", passWord[i]);
  }

  return 0;
}

char intToCharacter(int charNum) {
  char letter;

  int asciiNum = 65 + charNum%24;
  int asciiSmallNum = 97 + charNum%24;

  letter = (char)asciiNum;

  return letter;
}

void controller(int *rI, int *rC, int *pA, int *pCA, i) {

  /*********************Testoutput********************/

  printf("\nrI  is %i -> %i\n", rI, *rI);
  printf("\nrC  is %i -> %i\n", rC, *rC);
  printf("\npA  is %i -> %i\n", pA, *pA);
  printf("\npCA is %i -> %i\n", pCA, *pCA);

  /***************************************************/

  for (int j = 0; j < i; j++) {
    while (*rI == *pA) {
      printf("Found a double int\n");
      *rI = rand() % 50;
    }
    while (*rC == *pCA) {
      printf("Found a double char\n");
      *rC = rand() % 25;
    }

    pA++;
    pCA++;
  }
}

char intToAscii(int num) {
  char res = (char)num%9 +48;
  return res;
}

void passGenerator(int *pA, char *pCA, char *res) {

    for (int i=1; i<55; i++) {
      if ((i%5) == 0) {
        *res = '_';
        printf("1. res = %c\n", *res);
      } else if ((i%2) == 0) {
        *res = intToAscii(*pA);
        pA++;
        printf("2. res = %c\n", *res);
      } else {
        *res = *pCA;
        pCA++;
        printf("3. res = %c\n", *res);
      }
      printf("i = %i\n", i);
      res++;
    }
}

