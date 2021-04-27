#include<string.h>
#include<stdio.h>
#include<stdlib.h>


// 3 copystring functions 

void copyString(char to[], char from[])
{
    int i;
    for (i = 0; from[i] != '\0'; i++)
        to[i] = from[i];     
    
    to[i] = '\0';
}

void copyString2(char *to, char *from)
{
    for(; *from != '\0'; ++from, ++to)
        *to = *from;
    
    *to = '\0';
}   

void copyString3(char *to, char *from)
{
    while(*from) // the null character is equal to the value 0, so will jump out then
        *to++ = *from++;
    
    *to = '\0';
}

int main(void){

    char string1[] = "A string to be copied";
    char str2[50];

    copyString3(str2, string1);
    printf("%s\n", str2);

    return 0;
}