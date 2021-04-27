#include<stdio.h>

int main(int argc, char *argv[]){

    int numberofArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of arguments = %d\n", numberofArguments);
    printf("First argument = %s\n", argument1);
    printf("Second argument = %s\n", argument2);


    return 0;
}