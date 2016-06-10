#include <stdio>
#include <stdlib>

void newDatabase();
void showDatabase(int*);
void useDatabase(int*);
void deleteDatabase(int*);

int main() {
  int choose;

  printf("*header*Hauptmenu Lager Logistic");

  printf("1.  New   Database.\n");
  printf("2.  Show  Database.\n");
  printf("3.  Use   Database.\n ");
  printf("4. Delete Database.\n");

  printf("-----------------------\n");
  printf("Choose a menu: \n");
  scanf("%s", &choose);

  
  switch (choose):
    case 1:
      printf("You want to make a new database.\n");
      newDatabase();
      break;
    case 2:
      int db = 0;
      printf("You want to show a database.\n");
      printf("Which Database you want to see (id or name");
      scanf("%i", &db);
      if (db != 0)
        showDatabase(db);
      else
        printf("Database does not exist");
      break;
    case 3:
      int db = 0;
      printf("You want to edit a database.\n");
       if (db != 0)
        editDatabase(db);
      else
        printf("Database does not exist");
      break;
    case 4:
      int db = 0;
      printf("You want to delete a database.\n");
       if (db != 0)
        deleteDatabase(db);
      else
        printf("Database does not exist");
      break;

  return 0;
}

void newDatabase() {

  char yn = 'y';

  printf("------- New Database -------\n");
  printf("You want to make a new Database (y/n): ");
  scanf("%c", &yn);
  printf("\n");

  if (yn != 'y'){
    exir(1);
  }

  // deklarate a new file where i save the database
  // The Name of database is the same then as the file name.

  printf("What is the name of the database: ");
  getchar("" != )

  stdout = fopen("", "w+");

}

void useDatabase(int db) {



}

void editDatabase(int db) {


}

void deleteDatabase(int db) {


}

