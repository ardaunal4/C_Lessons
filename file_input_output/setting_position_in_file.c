/*
Setting Position in a file
As a complement to ftell(), you have the fseek() funtion
int fseek(FILE *pfile, long offset, int origin);
First parameter is pointer to the file you are repositioning
Second and third parameters define where you want to go in the file.
---second parameter is an offset from a reference point specified by the third parameter.
---reference point can be one of three values that are specified by the predefined names
----SEEK_SET : defines the begining of the file
----SEEK_CUR : defines the current position in the file
----SEEK_END : defines the end of the file

For a text mode files, second argument must be a value returned by ftell()
*/
#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE *fp;

    fp = fopen("file.txt", "w+");
    fputs("This is Arda", fp);

    fseek(fp, 7, SEEK_SET);
    fputs("Hello. How are you?", fp);

    fclose(fp);
    fp = NULL;

    // fgetpos() exmple

    FILE *fp2;
    fpos_t  position;
    
    fp2 = fopen("file.txt", "w+");
    fgetpos(fp2, &position);
    fputs("Hello world!", fp2);
    
    fgetpos(fp2, &position);
    fputs("This is going to override previous content", fp2);
    
    fclose(fp2);
    fp2 = NULL;

    return 0;
}