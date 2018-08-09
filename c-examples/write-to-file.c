#include <stdio.h>
int main()
{
  int num;
  FILE *filePointer;
  filePointer = fopen("test.txt", "w");         // open the file

  if (filePointer == NULL) {                    // show error if file opening failed
    printf("Error: couldn't open the file.");
    return 1;
  }

  printf("Enter an integer: ");                 // get int input from user
  scanf("%d", &num);

  fprintf(filePointer, "%d", num);              // write num to the file
  fclose(filePointer);                          // close the file

  return 0;
}
