#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE *fp;
    int ch;

    fp = fopen("file.txt", "w");

    for (ch = 33; ch <= 100; ch++)
    {
        fputc(ch, fp);
    }

    fclose(fp);

    fp = NULL;

    /* We can also put strings */

    FILE *fpt;

    fpt = fopen("file.txt", "w+");

    fputs("Hello. I am arda\n", fpt);
    fputs("This is an example.\n", fpt);

    fclose(fpt);
    fpt = NULL;

    return 0;
}