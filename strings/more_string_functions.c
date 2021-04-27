#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){

    // strchr() functions to find characters inside of a string
    char str[] = "The quick brown fox."; // The string to be searched
    char ch = 'q'; // The character we are looking for
    char *pGot_char = NULL; // pointer initialized to null
    pGot_char = strchr(str, ch); // Stores the address where the ch is found.
    // strstr() function searchs substring into a string
    char text[] = "Every dog has his day";
    char word[] = "dog";
    char *pFound = NULL;
    pFound = strstr(text, word);
    printf("Output is = %d\n", *pFound);
    // Breaking a sentence into words is called tokenizing a string
    // strtok() is a function that tokenizing a string
    char str2[80] = "Hello how are you - my name is - Jason";
    const char s[2] = "-";
    char *token;
    token = strtok(str2, s); // get first token
    while (token != NULL) // walk through other tokens
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }

    /* Analyzing strings funstions */
    char buff[100]; // input buffer
    int nLetters = 0; // Number of letters in buffer
    int nDigits = 0; // Number of digits in buffer
    int nPunct = 0; // Number of puntuation(noktalama) characters

    printf("\nEnter a string : ");
    scanf("%s", buff);
    int i = 0;
    while(buff[i])
    {
        if (isalpha(buff[i]))
            ++nLetters;
        else if (isdigit(buff[i]))
            ++nDigits;
        else if (ispunct(buff[i]))
            ++nPunct;
        ++i;
    }

    printf("\nYour string contains %d letters, %d digits, and %d pinctuation characters.\n", nLetters, nDigits, nPunct);
    return 0;
}