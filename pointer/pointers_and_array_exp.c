#include<stdlib.h>
#include<stdio.h>
#include<string.h>


int main(){

    char string[] = "arda unal";
    char *ptr = string;

    for (int i = 0; i < strlen(string); ++i)
    {
        printf("string[%d] = %c, *(ptr + %d) = %c, &string[%d] = %p, ptr + %d %p\n", 
                i, string[i], i, *(ptr + i), i, &string[i], i, ptr + i);
    }
    //another example

    long multiple[] = {15L, 25L, 35L, 45L};
    printf("length of array = %ld\n", sizeof(multiple)/sizeof(multiple[0])); // length of array

    long *pointer = multiple;

    for (int i = 0; i < sizeof(multiple)/sizeof(multiple[0]); i++)
    {
        printf("address pointer + %d, (&multiple[%d]) : %llu    *(pointer+%d)    value: %d\n ",
                i, i, (unsigned long long)(pointer + i), i, *(pointer + i));
    }
    
    printf("\n Type long occupies: %d bytes\n", (int)sizeof(long));

    return 0;
}