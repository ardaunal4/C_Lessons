#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
toupper() function converts a char from lowercase to uppercase
tolower() function converts a char from  uppercase to lowercase
stdlib.h header file decleares functions that you can use to convert string to a numerical value
atof() function converts a string to the double variable
atoi() function converts a string to the integer variable
atol() function converts a string to the long variable
atoll() function converts a string to the long long variable
strtod() function converts a double to the string variable
strtof() function converts a float to the string variable
strtold() function converts a long double to the string variable
*/

int main(){

    char str[] = {"my name is arda"};

    for (int i = 0; (str[i] = (char)toupper(str[i])) != '\0'; i++); // convert string lowercase to uppercase
    printf("my uppercase string is : %s\n", str);
    // for (int i = 0; (str[i] = (char)tolower(str[i])) != "\0"; i++); // convert string uppercase to lowercase
    // printf("my lowercase string is : %s", str);

    char value_str[] = "10.89";
    double value = atof(value_str);
    printf("my value as a double = %.2f", value);

    return 0;
}