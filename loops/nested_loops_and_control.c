/*
continue statement will pass the current iteration when it is used. Generally it is used with condition statement if.
break statement basicly terminates the loop
*/
#include<stdio.h>

int main(void){

    enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    for(enum Day day = Monday; day <= Sunday; ++day){
        if (day == Wednesday)
            continue;
        printf("Day is %d\n", day);
    }

    int counter = 0;
    while (1)
    {
        counter += 1;
        if (counter == 10)
            break;
        printf("counter is %d\n", counter);
    }
    return 0;
}
