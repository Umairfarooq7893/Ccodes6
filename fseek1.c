/*
    Author : Umair Farooq
    Program: fseek()
    
    fseek() is a file-handling function in C 
    used to move the file pointer to a specific location inside a file.

    fseek() allows you to jump to any position in a file 
    instead of reading it sequentially.
*/
#include<stdio.h>
int main(){
    FILE *p;
    p = fopen("Test.txt","r");

    // Read first character
    char ch = fgetc(p);
    printf("Character at position 1: %c\n", ch);

    fseek(p,6,SEEK_SET);
    ch = fgetc(p);
    printf("Character at position 6: %c\n", ch);
    return 0;
}

