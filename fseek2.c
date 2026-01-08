/*
    Author : Umair Farooq
    Program: fseek()
*/
#include <stdio.h>

int main() {
    FILE *p;
    p = fopen("Test.txt", "r");
    // Read first character
    char ch = fgetc(p);
    printf("Character at position 1: %c\n", ch);

    fseek(p,-3,SEEK_END);
    ch = fgetc(p);
    printf("Character at position 3 from last: %c\n", ch);


    return 0;
}