#include<stdio.h>
/*
more than one comment lines symbol.
*/

/*
if you want to add a header file from your directory, you should include it such as #include "something.h"
for standard system directories, we can use #include<something.h>
*/

int main(){
    
    printf("arda"); //one comment line symbol.

    char str[100];
    int i;
    double a;
    float b;

    int arda = 10, unal = 15l;
    

    printf("\nEnter a value: ");
    scanf("%s %d", str, &i); // string is %s and %d is integer
                             // another important point is that we need to use & symbol for any variable except strings!
    printf("\nYou entered: %s %d ", str, i);

    /* take double and float as an input 

    printf("\nEnter a double and float: ");
    scanf("%lf %f", &a, &b);

    printf("\nDouble and float : %g %f", &a, b);
    */
    
    return 0;
}