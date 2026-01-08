/*  Author  : Umair Farooq
    Program : Writing to a file
*/

#include <stdio.h>

int main() {
    FILE *fptr;
    // "w" = open to write (creates new file or overwrites existing file)
    fptr = fopen("TestWrite.txt", "w");

    if (fptr == NULL) { // Check fp == NULL first → ensures program won’t crash
        printf("Error: File cannot be created or opened.\n");
    } else {
        printf("File opened successfully for writing.\n\n");

        // Writing single characters to file
        fprintf(fptr, "%c", 'H');
        fprintf(fptr, "%c", 'E');
        fprintf(fptr, "%c", 'L');
        fprintf(fptr, "%c", 'L');
        fprintf(fptr, "%c", 'O');
        printf("Characters written successfully to file.\n");
        fclose(fptr);
        printf("\nFile closed successfully.\n");
    }

    return 0;
}
