#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int change = 0;

  printf(
    "Menu\n
     1. New Account\n
     2. Change Account\n
     3. Delete Account\n
     4. Show all Accounts\n
     5. Quit\n
     Press the Number and enter to change the Menu.\n"
  );

  scanf(change);

  switch(change) {
    case 1:
      newAccount();
      break;
    case 2:
      changeAccount();
      break;
    case 3:
      deleteAccount();
      break;
    case 4:
      showList();
      break;
    case 5:
      return 0;
      break;
    default:
      printf("Wrong menu input!");
      break;
  }
}

/*
 * Hier geht es weiter, alle Menü punkte mit Code auffüllen
 * und testen.
 * So Variabel wie möglich aufbauen, damit man den Code für jegliche
 * anderen Objekte einfach umschreiben kann.
 *
 *  Objekt (Mensch) Struct am Anfang.
*/

void newAccount() {}

void changeAccount() {}

void deleteAccount() {}

void showList() {}
