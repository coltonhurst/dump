#include <stdio.h>

int main()
{
    FILE *filePointer;    // Create the file pointer

    filePointer = fopen("filepath", "w");   // create the 'filepath' file in write mode
    fprintf(filePointer, "Write this text to the file!\n"); // write the text to the file
    fclose(filePointer);  // close the file
    return 0;
}
