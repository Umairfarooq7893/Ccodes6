 /*  
    Author  : Umair Farooq
    Program : Testing different file opening modes in C
*/

#include <stdio.h>

int main() {
    FILE *fp;

    // 1. "r" = open to read (file must exist)
    fp = fopen("Test.txt", "r");
    if (fp == NULL) {
        printf("\"r\" mode: File does not exist.\n");
    } else {
        printf("\"r\" mode: File opened successfully.\n");
        fclose(fp);
    }

    // 2. "rb" = open to read in binary mode (file must exist)
    fp = fopen("Test.txt", "rb");
    if (fp == NULL) {
        printf("\"rb\" mode: Binary file does not exist.\n");
    } else {
        printf("\"rb\" mode: Binary file opened successfully.\n");
        fclose(fp);
    }

    // 3. "w" = open to write (creates new or overwrites existing file)
        /* If the file does not exist, it is created.
           If the file already exists, its contents are erased (overwritten).*/
    fp = fopen("write.txt", "w");
    if (fp == NULL) {
        printf("\"w\" mode: Cannot create or open file.\n");
        /*fp == NULL checks if the file failed to open (e.g., permission issue).*/
    } else {
        printf("\"w\" mode: File created/opened successfully (old data erased).\n");
        fclose(fp);
    }

    // 4. "wb" = open to write in binary mode (creates new or overwrites)
    fp = fopen("write_binary.bin", "wb");
    if (fp == NULL) {
        printf("\"wb\" mode: Cannot create or open binary file.\n");
    } else {
        printf("\"wb\" mode: Binary file created/opened successfully (old data erased).\n");
        fclose(fp);
    }

    // 5. "a" = open to append (adds data to end, creates if not exist)
    fp = fopen("append.txt", "a");
    if (fp == NULL) {
        printf("\"a\" mode: Cannot open or create file.\n");
    } else {
        printf("\"a\" mode: File opened successfully (data will be added at the end).\n");
        fclose(fp);
    }

    return 0;
}
