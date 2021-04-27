#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *fruit[10];
    char buffer[32];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter fruit #%d: ", i+1);
        fgets(buffer, 32, stdin); // it takes string with the length of 32 byte from stdin function and it saves the string into the buffer!

        //allocate memory based on the string size
        fruit[i] = (char *)malloc(strlen(buffer) + 1);
        if (fruit[i] == NULL)
        {
            perror("Unsuccesful!");
            exit(1);
        }

        // copy the string's address
        strcpy(fruit[i], buffer);        
    }

    for (int k = 0; k < 10; k++)
    {
        printf("%s", fruit[k]);
    }
    
    return 0;
} 