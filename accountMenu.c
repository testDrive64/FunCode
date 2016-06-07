#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 30

struct personDetails {
  char vname[MAX];
  char nname[MAX];
  long PLZ;
  char ort[MAX];
  int geburtsjahr;
  int used;
};

typedef struct personDetails Person;

//--------- Functions ---------//
Person newAccount();
Person editAccount(Person);
Person deleteAccount(Person);
void showList(Person[]);


int main(int argc, char *argv[]) {
  int change = 0;
  int i = 0;
  int running = 0;
  char firstname[MAX];

  Person personList[100];
  while (i<100) {
    // First Declaration of the personlist is
    // to deaktivate every person in the list.
    personList[i].used = 0;
    i++;
  }

  Person bufferPers;
  i=0;
  //------------- Menu -------------//

  while(running == 0) {
    printf(
      "Menu\n \
       1. New Account\n \
       2. Edit Account\n \
       3. Delete Account\n \
       4. Show all Accounts\n \
       5. Quit\n \
       Press the Number and enter to change the Menu.\n"
    );

    scanf("%i", &change);

    switch(change) {
      case 1:

        while (personList[i].used != 0) {
          i++;
        }
        personList[i] = newAccount();
        printf("Person %s %s is saved to the List on number %i.\n", personList[i].vname, personList[i].nname, i+1);
        i=0;
        break;

      case 2:

        printf("Edit Account\n");
        printf("Which Account you want to change(Firstname): ");
        fgets(firstname, MAX, stdin);

        for (int i=0; (personList[i].vname == firstname); i++){}
        personList[i] = editAccount(personList[i]);

        break;

      case 3:
        personList[i] = deleteAccount(personList[i]);
        break;
      case 4:
        showList(&personList[0]);
        break;
      case 5:
        running = 1;
        return 0;
        break;
      default:
        printf("Wrong menu input!");
        break;
      }
    }
}


Person newAccount() {
  Person pers;
  pers.vname[0] = "";
  char buffer[2];
  fgets(buffer, 2, stdin);

  printf("Neue Person anlegen\n");

  printf("Vorname      : ");
  fgets(pers.vname, MAX, stdin);
  printf("Nachname     : ");
  fgets(pers.nname, MAX, stdin);

  printf("Postleitzahl : ");
  do {
    scanf("%51d", &pers.PLZ);
  } while(getchar() != '\n');

  printf("Wohnort      : ");
  fgets(pers.ort, MAX, stdin);

  printf("Geburtsjahr  : ");
  do {
    scanf("%4d", &pers.geburtsjahr);
  } while(getchar() != '\n');

  pers.used=1;

  return pers;
}

Person editAccount(Person pers) {
  int num = 0;
  printf("Welcher Eintrag soll geändert werden:\n");
  printf("\t=> 1. Vorname\n");
  printf("\t=> 2. Nachname\n");
  printf("\t=> 3. Wohnort\n");
  printf("\t=> 4. Geburtsjahr\n");
  scanf("%i", num);

  switch(num) {
    case 1:
      printf("Neuer Vorname: ");
      fgets(pers.vname, MAX, stdin);
      break;
    case 2:
      printf("Neuer Nachname: ");
      fgets(pers.nname, MAX, stdin);
      break;
    case 3:
      printf("Neue Postleitzahl: ");
      do {
        scanf("%51d", &pers.PLZ);
      } while(getchar() != '\n');

      printf("Neuer Wohnort: ");
      fgets(pers.ort, MAX, stdin);
      break;
    case 4:
      printf("Anderes Geburtsjahr  : ");
      do {
        scanf("%4d", &pers.geburtsjahr);
      } while(getchar() != '\n');
      break;
  }
  return pers;
}

Person deleteAccount(Person pers) {
  pers.used = 0;
  return pers;
}

void showList(Person *list) {
  printf("\n");
  do {
    printf("%s\n", list);
    *list++;
  }while(list!= '\0');
}
