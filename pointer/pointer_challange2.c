#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int lenght_of_string(char *str)
{
    char *begining = str;

    while (*str)
        ++str;
    
    return (str - begining);  
}

int main(void){

    char string[] = "ardaunal";
    printf("length = %d", lenght_of_string(string));

    return 0;
}  