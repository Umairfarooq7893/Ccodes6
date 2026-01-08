/*
    Author : Umair Farooq
    Program: fseek() with SEEK_CUR
*/
#include <stdio.h>

int main() {
    FILE *p;
    p = fopen("Test.txt", "r");
    // Read first character
    char first = fgetc(p);
    printf("1st character: %c\n", first);

    // Move 5 bytes FORWARD from the current position
    fseek(p,5,SEEK_CUR);
    char ch = fgetc(p);
    // After skipping 5 bytes
    printf("Character after skipping 5 bytes: %c\n", ch);

    fclose(p);
    return 0;
}




