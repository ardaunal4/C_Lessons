#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    // reading string from a text file can be done by fgets() function.
    // char *fgets(char *str, int nchars, FILE *stream);

    FILE *fp;
    char str[60];

    // opening file for reading
    fp = fopen("mytext.txt", "r");

    if (fp == NULL)
    {
        perror("Error rised during opening file!");
        return (-1);
    }

    if (fgets(str, 60, fp) != NULL)
    {
        printf("str = %s\n", str);
    }

    fclose(fp);
    fp = NULL;

    system("pause");
    return 0;
}
/*
You can get formatted input from a file by using the standard fscanf() function.
int fscanf(FILE *stream, const char *format, ...);
First argument of the function is the pointer to a FILE object that identifies the stream.
Second argument of the function is the format. For exp:

char str1[10], str2[10], str3[10];
int year;
FILE *fp;

fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

*/