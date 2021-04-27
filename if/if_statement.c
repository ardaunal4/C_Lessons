#include<stdlib.h>
#include<stdio.h>

int main(){

    int user_input;

    printf("Enter a Value = ");
    scanf("%d", &user_input);

    if (user_input%2 == 1){
        printf("\nYou entered an odd number!");
    }
    else{
        if (user_input != 0)
        {
            printf("\nYou entered an even number!");
        }
        else{
            printf("\nYou entered zero!");
        }        
    }
    //same code can be written as below
    /*
    if (user_input%2 == 1)
        printf("\nYou entered an odd number!");
    else
        if (user_input != 0)
            printf("\nYou entered an even number!");
        else
            printf("\nYou entered zero!");      
    */
    int x = user_input > 20 ? 25:50; // ternary statement
    printf("\nx is %d", x);
    /* we can think ternary statement as
    if (y>7)
        x = 25;
    else
        x = 50;
    */
    return 0;
}