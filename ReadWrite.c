/*  Author  : Umair Farooq
    Program : Reading and Writing to a File

This program will:
Write data to a file using "w" mode.
Close and reopen the same file in "r" mode.
Read back the data character by character.
*/

#include <stdio.h>
int main() {
    FILE *fp;
    char ch;
// Step 1: Write data to file

    fp = fopen("Test.txt", "w");

    if (fp == NULL) {
        printf("Error: File cannot be created or opened for writing.\n");
        return 1;
    } else {
        printf("File opened successfully for writing.\n");
        // Writing string to file
        fprintf(fp, "Umair Farooq\t");
        // Writing single characters to file
        fprintf(fp, "%c", 'H');
        fprintf(fp, "%c", 'e');
        fprintf(fp, "%c", 'l');
        fprintf(fp, "%c", 'l');
        fprintf(fp, "%c", 'o');

        printf("Data written successfully to file.\n");

        fclose(fp);
        printf("File closed after writing.\n\n");
    }
// Step 2: Read data from same file

    fp = fopen("Test.txt", "r");

    if (fp == NULL) {
        printf("Error: File cannot be opened for reading.\n");
    } else {
        printf("File opened successfully for reading.\n");
        printf("Contents of file:\n");
        
        printf("%c\n",fgetc(fp));
        printf("%c\n",fgetc(fp));
        printf("%c\n",fgetc(fp));
        printf("%c\n",fgetc(fp));
        printf("%c\n",fgetc(fp));

        fclose(fp);
        printf("\nFile closed after reading.\n");
    }
return 0;
}