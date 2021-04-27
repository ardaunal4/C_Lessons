#include<string.h>
#include<stdio.h>
#include<stdlib.h>


int main(){

    int length;
    char *str = NULL;

    printf("Enter lenght of string : ");
    scanf("%d", &length);
    
    str = (char *) malloc(length * sizeof(char));

    if (str != NULL)
    {
        printf("Enter your string = ");
        // scanf("%s", str);
        scanf(" ");
        gets(str); //The C library function char *gets(char *str) reads a line from stdin and stores it into the string pointed to by str. 
                   //It stops when either the newline character is read or when the end-of-file is reached, whichever comes first.
    }
    
    printf("Entered string = %s", str);
    free(str);
    str = NULL;


    return 0;
}

/* gets() function example

#include <stdio.h>

int main () {
   char str[50];

   printf("Enter a string : ");
   gets(str);

   printf("You entered: %s", str);

   return(0);
}
*/