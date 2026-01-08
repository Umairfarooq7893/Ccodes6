/*
    Author  : Umair 
    Program : Writing a structure to a file
*/
#include <stdio.h>
#include <string.h> 

struct Student {
    int id;
    char name[20];
};

int main() {
    struct Student s1;
    s1.id = 601;
    strcpy(s1.name, "Umair");

    FILE *p;
    // Changed mode from "r" to "wb" (write binary)
    p = fopen("Test.txt", "wb");

    if (p == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // fwrite(pointer to data, size of data, number of items, file pointer)
    fwrite(&s1, sizeof(struct Student), 1, p);

    printf("Data written successfully.\n");

    fclose(p);
    return 0;
}

