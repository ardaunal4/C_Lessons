#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

int main(){

    time_t t;
    srand((unsigned) time(&t));
    int RandomNumber = rand() % 21;
    /*
    Easy way to generate random number with a function :
    int random_int(int min, int max) 
    {
        return min + rand() % (max - min);
    }
    */

    int user_input;
    printf("This is a guessing game.\n");
    printf("I have choosen a number between 0 and 20 which you must guess.\n\n");
    int counter = 5;

    while(true)
    {
        counter -= 1;
        
        if (counter != 0)
            printf("\nEnter a guess : ");
            scanf("%d", &user_input);
    
            if (user_input == RandomNumber)
            {
                printf("Congratulations. You guessed it!");
                break;
            }

            else if (user_input > 20 || user_input < 0)
            {
                printf("Sorry, %d is wrong. This number is out of range.\n", user_input);
                printf("You have %d tries left.\n", counter);
            }

            else if (user_input < RandomNumber)
            {
                printf("Sorry, %d is wrong. My number is higher than that.\n", user_input);
                printf("You have %d tries left.\n", counter);
            }

            else if (user_input > RandomNumber)
            {
                printf("Sorry, %d is wrong. My number is lower than that.\n", user_input);
                printf("You have %d tries left.\n", counter);
            }
        else
        {
            printf("You have no tries left. Lost!");
            break;     
        }   
    }

    return 0;
}
