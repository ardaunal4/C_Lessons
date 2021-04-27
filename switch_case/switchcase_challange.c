#include<stdio.h>

int main(){

    float user_input; // that represents number of hours in a week
    printf("How many hours did you work in this week : ");
    scanf("%f", &user_input);

    float pay_rate = 12.00; // dolar per hour
    int casee = 0;
    float tax = 0;
    float week_salaray = user_input * 12.00;
    printf("\nWeekly salary is %.2f", week_salaray);

    if (week_salaray < 300)
        casee = 1;
    else 
        if (week_salaray > 300 && week_salaray < 450)
            casee = 2;
        else
            casee = 3;

    switch (casee)
    {
    case 1:
        tax = week_salaray * 15 / 100;
        printf("\nTax is %.2f", tax);
        break;

    case 2:
        tax = week_salaray * 20 / 100;
        printf("\nTax is %.2f", tax);
        break;

    case 3:
        tax = week_salaray * 25 / 100;
        printf("\nTax is %.2f", tax);
        break;
    
    default:
        break;
    }

    return 0;
}