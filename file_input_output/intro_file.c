#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    FILE *pfile = NULL;
    char *filename = "mytext.txt";
    pfile = fopen(filename, "w"); // open file for writing
    if (pfile != NULL) // Always check if the file is opened
        printf("Failed to open %s\n", filename);

    pclose(pfile);
    pfile = NULL;

    // NOTE : we can not DELETE or RENAME a file if it is not closed!

    // rename a file
    if(rename("mytext.txt", "newtext.txt"))
        printf("Failed to rename file!");
    else
        printf("File successfully renamed");

    // delete file
    remove("myfile.txt");

    return 0;
}