#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int length_of_string(char a[]);
void concatenation(char a[], char b[]);
bool comparision(char a[], char b[]);


int main(int argc, char const *argv[])
{
    char my_string[] = "this is my string";
    printf("Length of my string is = %d\n", length_of_string(my_string));
    char my_string2[] = "second this is my string";
    concatenation(my_string, my_string2);
    printf("\ncomparision1 = %d\n", comparision(my_string, my_string2));
    char my_string3[] = "this is my string";
    printf("comparision1 = %d", comparision(my_string, my_string3));

    return 0;
}

int length_of_string(char str[]){

    int length = 0;

    for (int i = 0; (str[i]) != '\0'; i++)
    {
        length++;
    }
    return length;
}

void concatenation(char str1[], char str2[]){

    int length_str1 = length_of_string(str1);
    int length_str2 = length_of_string(str2);
    int total_length = length_str1 + length_str2;
    char result[total_length + 1];
    int counter1 = 0;
    int counter2 = 0;

    while (counter1 != total_length)
    {
        if (counter1 < length_str1)
            result[counter1] = str1[counter1];
            
        else if (counter2 <= length_str2)
        {
            result[counter1] = str2[counter2];
            ++counter2;
        }
        ++counter1;
    }
    result[counter1 + 1] = '\0';
    printf("%s", result);
}

bool comparision(char a[], char b[]){

    int counter = 0;
    bool result;

    if (length_of_string(a) == length_of_string(b))
    {
        while (counter <= length_of_string(a))
        {
            if (a[counter] != b[counter])
            {
                result = false;
                break;
            }
            else
                result = true;

            ++counter;            
        }        
    }
    else
        result = false;
    
    return result;
}