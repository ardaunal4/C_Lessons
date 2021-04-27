#include<stdio.h>

int main(void){

    /* Basic while loop*/
    // int count = 0;

    // while(count < 15){
    //     printf("count = %d\n", count);
    //     count++;
    // }
    /*Logic controlled while loop*/
    // int num = 0;
    // scanf("%d", &num);

    // while(num > 0){
    //     printf("num = %d\n", num);
    //     scanf("%d", &num);
    // }
    /* do while loop
    note1 : always guaranteed to execute at least once
    note2 : after initial exection, body can be executed while the condition is true
    */
//    int num;
//    do
//    {
//        printf("Enter a number = ");
//        scanf("%d", &num);
//        printf("Your number is %d\n", num);
//    } while (num != 20);
   // counter controlled do-while loop
   int num = 0;
   do
   {
       printf("num = %d\n", num);
       ++num;
   } while (num <= 10);
   




    return 0;
}