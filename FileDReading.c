/*  Author  : Umair Farooq
    Program : Reading from a file */
#include <stdio.h>
int main() {
    FILE *fp; // declaring file pointer
    char ch;
    // "r" = open to read (file must already exist)
    fp = fopen("Test.txt", "r");

    if (fp == NULL) { // Check fp == NULL first → ensures program won’t crash
        printf("Error: File does not exist or cannot be opened.\n");
    } else {
        printf("File opened successfully.\n\n");
        // Reading a single character from file
        fscanf(fp, "%c", &ch); // Use fscanf(fp, "%c", &ch) to read a single character.
        printf("Character read = %c\n", ch);
        fscanf(fp, "%c", &ch); 
        printf("Character read = %c\n", ch);
        fscanf(fp, "%c", &ch); 
        printf("Character read = %c\n", ch);
        fscanf(fp, "%c", &ch); 
        printf("Character read = %c\n", ch);
        fscanf(fp, "%c", &ch); 
        printf("Character read = %c\n", ch);
        fclose(fp); // always close file after opened.
        printf("\nFile closed successfully.\n");
    }
    return 0;
}
