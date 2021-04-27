#include<stdio.h>
#include<stdlib.h>


int main(){

    FILE *fp;
    const char filename[] = "resim.jpg";
    char x;
    int a = 0;

    fp = fopen(filename, "r");
    if (fp == NULL)
    {
        perror("Error has rised");
        return (-1);
    }

    while ((x = fgetc(fp)) != EOF)
    {
        printf("%d. pixel is %c", a, x);
        a++;
    }
    

    return 0;
}