#include <stdio.h>
#include <stdlib.h>

int main() {
  
  FILE *fp;
  if((fp = fopen("some.txt", "w+")) == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  printf("%c", fp);

/*
  while (fp != EOF) {
    printf("%s", fp);
    fp++;
  }
*/

  printf("\n");
  if (fclose(fp) != 0)
    printf("Error closing file\n");

  return 0;
}
