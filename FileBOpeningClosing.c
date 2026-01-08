/* Author : Umair Farooq
   Program : Opening and Closing a File
*/
#include <stdio.h>

int main() {
// Declare a File Pointer
    FILE *fp;
/* FILE is a data type defined in <stdio.h>
   fp is a pointer that will be used to access the file.*/

// Opening file in read mode
    fp = fopen("Test.txt", "r");

// Check if file opened successfully
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; // Ends up CODE here
    }
    printf("File opened successfully.\n");

// Closing the file
    fclose(fp);
    printf("File closed successfully.\n");
    return 0;
}

