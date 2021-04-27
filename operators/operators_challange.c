#include<stdio.h>
#include<stdlib.h>

int main(){

    int user_input;
    double min_in_years = 0.0;
    double min_in_days = 0.0;

    printf("Enter minutes = ");
    scanf("%d", &user_input);
    printf("\n");

    min_in_days = (float)user_input / (60*24);
    min_in_years = (float)user_input / (365*60*24);

    printf("Years = %e\n", min_in_years);
    printf("Days = %e", min_in_days);

    return 0;
}