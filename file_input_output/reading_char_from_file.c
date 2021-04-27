#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    FILE *fp;
    int c = 0;
    
    fp = fopen("D:\\file.txt", "r");

    if (fp == NULL)
    {
        perror("Error in opening file!");
        return (-1);
    }

    // read a single char
    // fgetc() function is used to obtain input from a file single character at a time.
    while ((c = fgetc(fp)) != EOF) // EOF = end of file 
    {
        printf("%c", c);
    }
    printf("\n");

    fclose(fp);
    fp = NULL;  

    // reading string from a text file can be done by fgets() function.
    // char *fgets(char *str, int nchars, FILE *stream);
    
    system("pause");
    return 0;
}