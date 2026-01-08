/*  
    Author  : Umair Farooq
    Program : Reading a file until EOF 
    
    EOF is a constant in <stdio.h> 
    that signals the end of a file or an input error while reading data.

*/
#include <stdio.h>
int main() {
    FILE *fp;;
    fp = fopen("Test.txt", "r");
    if (fp == NULL) {
        printf("Error: File not found.\n");
        return 1;
    }

    int ch = fgetc(fp);

    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fp);   // read next char
    }

    printf("\n");
    fclose(fp);
    return 0;
}