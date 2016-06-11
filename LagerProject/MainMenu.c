#include <stdio.h>
#include <stdlib.h>

void newDatabase();
void showDatabase(int);
void useDatabase(int);
void deleteDatabase(int);

void newDatabase();
void showDatabase(int*);
void useDatabase(int*);
void deleteDatabase(int*);

int main() {
  int choose;
<<<<<<< HEAD
  int db = 0;

  printf("Hauptmenu Lager Logistic\n\n");

  printf("1. New    Database.\n");
  printf("2. Show   Database.\n");
  printf("3. Use    Database.\n");
  printf("4. Delete Database.\n");

  printf("-----------------------\n");
  printf("Choose a menu: ");
  scanf("%i", &choose);
  printf("\n");

  switch (choose) {
=======

  printf("*header*Hauptmenu Lager Logistic");

  printf("1.  New   Database.\n");
  printf("2.  Show  Database.\n");
  printf("3.  Use   Database.\n ");
  printf("4. Delete Database.\n");

  printf("-----------------------\n");
  printf("Choose a menu: \n");
  scanf("%s", &choose);

  
  switch (choose):
>>>>>>> 17343444d9f463a74c6bc1b536c18629597663cf
    case 1:
      printf("You want to make a new database.\n");
      newDatabase();
      break;
    case 2:
<<<<<<< HEAD
      printf("You want to show a database.\n");
      printf("Which Database you want to see (id or name): ");
=======
      int db = 0;
      printf("You want to show a database.\n");
      printf("Which Database you want to see (id or name");
>>>>>>> 17343444d9f463a74c6bc1b536c18629597663cf
      scanf("%i", &db);
      if (db != 0)
        showDatabase(db);
      else
<<<<<<< HEAD
        printf("\n\n--! Database does not exist !--\n\n");
      db = 0;
      break;
    case 3:
      printf("You want to edit a database.\n");
      printf("Which Database you want to edit (id or name): ");
      scanf("%i", &db);
      if (db != 0)
        editDatabase(db);
      else
        printf("\n\n--! Database does not exist !--\n\n");
      db = 0;
      break;
    case 4:
      printf("You want to delete a database.\n");
      printf("Which Database you want to delete (id or name): ");
      scanf("%i", &db);
      if (db != 0)
        deleteDatabase(db);
      else
        printf("\n\n--! Database does not exist !--\n\n");
      db = 0;
      break;
    }

  return 0;
}

void newDatabase() {

  char choiceYN = 'y';
  char *fileName;

  printf("\n------- New Database -------\n");
  printf("\nYou want to make a new Database (y/n): ");
  scanf(" %c", &choiceYN);
  getchar();
  printf("\n");

  if (choiceYN != 'y'){
    exit(1);
  }

  printf("What is the name of the database: ");

  do{
  scanf(" %c", &fileName);
  } while(getchar() != '\n');

  FILE *db = fopen(("%s.json", fileName), "w+");
  if (NULL == db)
    printf("ERROR Datei wurde nicht erstellt!");

}

void showDatabase(int db) {


}


void useDatabase(int db) {



}

void editDatabase(int db) {


}

void deleteDatabase(int db) {


}

=======
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

>>>>>>> 17343444d9f463a74c6bc1b536c18629597663cf
