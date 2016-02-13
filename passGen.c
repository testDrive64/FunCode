#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 1. Zufallszahlen Int (0-50)
// 2. Zufallszahlen Char (0-25)
// 3. Char Zufallszahl in Buchstaben umwandeln
// 4. Zufallszahlen und Zufallsbuchstaben in Zufälliger
//	Reihenfolge zusammen schreiben

char bigLetterArr[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
						 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

char smallLetterArr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
						   'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

char randomCharacter(int);

int main() {
	int randInt;
	char randChar;
	char pass[26];

	for(int j=0;j<27;j++) {
		printf("Small letter: %c\n", smallLetterArr[j]);
		printf("Big letter: %c\n", bigLetterArr[j]);
	}

	srand(time(NULL));

	for (int i=0; i < 27; i+=2) {
		randInt = rand() % 50;
		randChar = rand() % 25;
		printf("The number is: %d\n", randInt);
		pass[i] = randInt;
		pass[i+1] = randomCharacter(randChar);
		printf("Pass: %d -> %d\n", i, pass[i]);
	}

	printf("The generated password: \n\t\t ");
	for (int i=0; i<27; i++) {
		printf("%c", pass[i]);
	}

	return 0;
}

char randomCharacter(int count) {
	char letter;

	if ((count %2) == 0) {
		letter = bigLetterArr[count-1];
	} else {
		letter = smallLetterArr[count-1];
	}
	return letter;
}
