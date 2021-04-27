/*
Common string functions:
strlen() : getting the length of string
strcpy() and strncpy() : copying one character string to another
strcat() and strncat() : combining two character strings to another
strcmp() and strncmp() : determining if two character strings are equal 
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void){

    char my_string[] = {"my string."};
    printf("My string length is = %d\n", strlen(my_string));

    char src[50], dest[50];

    strcpy(src, "This is source.");
    strcpy(dest, "This is destination.");

    //strcpy does not compare the length of the char array and copied string length which may cause problems
    //strncpy is more safier than the strcpy function if we do not want to compare lengths everytime. For ex:

    char src1[40], dest1[12];

    memset(dest1, '\0', sizeof(dest1)); // memset function sets the size of the data inside a destination to null terminators.
    // That when you add something you will automatically be there. There is an example of memset function : 
    /*
    #include <stdio.h>
    #include <string.h>

    int main () {
        char str[50];

        strcpy(str,"This is string.h library function");
        puts(str);

        memset(str,'$',7);
        puts(str);
   
        return(0);
    }
    */
    strcpy(src1, "This is my message.");
    strncpy(dest1, src, sizeof(dest1) - 1);

    // concatenation can be made by strcat() or strncat() functions, but the safest way to do this with strncat()

    char src2[50], dest2[50];

    strcpy(src2, "This is my source.");
    strcpy(dest2, "This is my destination.");

    strncat(dest2, src2, 15);
    printf("Final destination strinc : |%s|\n", dest2);

    // strcmp() function can be used to compare 2 strings

    printf("Are Apple and Apple same =  %d", strcmp("Apple", "Apples")); // right value is less than left value then it prints -1. If they are equal it is 0. Otherwise 1.

    // Finally strncmp() function compares two strings with known char numbers :

    if (strncmp("Astronomy", "Astro", 5) == 0)
        printf("\nFound Astronomy!");

    return 0;
}