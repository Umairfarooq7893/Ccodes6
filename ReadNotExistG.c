/*  Author  : Umair Farooq
    Program : Testing if a file exists before reading from it */
#include<stdio.h>
int main() {
    FILE *fp;
//opening a file , in reading mode
    fp = fopen("hello.txt", "r");
    if(fp == NULL){
        printf("file doesnot exist \n");
    } else{
        fclose(fp);
    }
    return 0;
}