#include<stdio.h>
#include<stdbool.h>

int main(){

    int integerVar = 100;
    float floatingVar = 331.79232;
    double doubleVar  = 56464.123e+10;
    char charVar = 'a';
    bool boolVar = true;

    short int shortIntVar = 154;
    long int longIntVar = 4523;
    unsigned int unintVar = 56;
    unsigned short int shortunintVar = 12;
    unsigned long int longunintVar = 12;
    long double longdoubleVar = 54685.123e+15;

    printf("integerVar = %i\n", integerVar);
    printf("floatingVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);
    printf("boolVar = %i\n", boolVar);

    printf("boolVar = %i and floatingVar = %.2f\n", boolVar, floatingVar); // it is possible to print more than one variable with this method!
    //.2f represents that after . how many characters will print out!

    printf("shortIntVar = %hi\n", shortIntVar);
    printf("longIntVar = %li\n", longIntVar);
    printf("unsignedintVar = %u\n", unintVar);
    printf("shortunintVar = %hu\n", shortunintVar);
    printf("longunintVar = %lu\n", longunintVar);
    printf("longdoubleVar = %Le\n", longdoubleVar);

    return 0;
}