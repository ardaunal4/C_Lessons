#include<stdlib.h>
#include<stdio.h>


int main(){

    FILE *fpt;
    int lines = 0;
    int c = 0;
    
    fpt = fopen("D:\\challange1.txt", "r");

    if (fpt = NULL)
    {
        perror("Error rised!");
        return (-1);
    }

    /*
    for (int i = 0; i < 10; i++)
    {
        fputs("hey\n", fpt);
    }
    fseek(fpt, 0, SEEK_SET);
    */
    
    while ((c = fgetc(fpt)) != EOF)
    {
        if (c == '\n')
            ++lines;
    }
    
    fclose(fpt);
    fpt = NULL;

    printf("line number = %d", lines);

    return 0;
}