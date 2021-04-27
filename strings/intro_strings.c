/*
\ is called escape sequence. It is useful when you want to add \ or " into a string.
Every string finishes with \0 which is called null terminator. It basically terminates the string automatically by complier or it is possible to use it
directly to terminate string.
*/
/*
There is no special variable type for strings, but there functions for handling strings inside of the standard library.
Strings in C are stored in array of type char.
In definition of strings, array has one more free space than the string length because of the null terminator(\0).
*/
#include<stdio.h>

#define PI 3.1415926 // define a constant
#define OOPS "Now you have a constant string."
#define TEE 'a'

// with using const keyword, it is possible to convert a variable to the constant
const int MONTHS = 12; // const makes MONTHS into a read-only value
// const is newer approach and more flexible than define
// it allows you to decleare type and better control over which parts of a program can use the constant
// enums can be defined by constant symbols

// initializing a char array and declearing it as a contant is a good way of handling standard messages:
const char message[] = {"This is a message!"};

int main(){

    printf("This is on\ntwo lines.");
    printf("\nFor \" you write \\\".");
    printf("\nThe character \0 is used to terminate string.");

    char myString[20]; // 19 free space is for string's char and 1 is for null termination.
    char word[] = {'H', 'e', 'l', 'l', 'o'}; // it is possible to initialize a string with this way. It otomatically adds null terminator.
    char word2[7] = {"Hello!"}; // It is also possible to initialize like that, but do not forget a free space for null terminator.
    // best practise is that do not specify the length of the string, let it calculated by complier.
    /*
    It is not possible to initilaize a string such as

    char s[100];
    s = "gsdgasd"; 
    */

    printf("\nThis is an array = %s", word2); // print a string
    char input[10];
    printf("Enter your name : ");
    scanf("%s", input);
    printf("\n%s is your input", input);

    // It is not possible to use operators with string like ::: if(string1 == string2).

    return 0;
}