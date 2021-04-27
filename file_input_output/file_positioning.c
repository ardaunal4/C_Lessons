/*
There are 2 functioncs which say that where you are:
1. ftell()
2. fgetpos()

long fpos = ftell(pfile);

*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *fp;
    int len;

    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        perror("Error while opening file!");
        return (-1);
    }   

    fseek(fp, 0, SEEK_END);
    // The C library function fseek() sets the file position of the stream to a given offset. The pointer associated with the file is moved to that offset.

    len = ftell(fp);
    fclose(fp);

    printf("where am I = %d", len);
    fp = NULL;


    return 0;
}
