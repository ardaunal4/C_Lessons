#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    FILE *fp;

    fp = fopen("file.txt", "w+");
    
    if (!fp)
    {
        fprintf(fp, "%s %s %s %s %d", "HELLO.", "I", "am", "Arda.", 24); // all of them seperated with spaces as in string!
    } 

    fclose(fp);

    return 0;
}