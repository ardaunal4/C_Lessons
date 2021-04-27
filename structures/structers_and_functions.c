// It is always better to use pointer while using structures as a parameter of function, because it only refers to address instead of hole structer. 
// It becomes more efficient and fast!

#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool siblings(struct Family *const family1, struct Family *const family2) // it is better to use const modifier to not allow any modification of the pointer addresses
{
    if (strcmp(family1->mother, family2->mother) == 0)
        return true;
    else
        return false;
}

int main(){

    struct Family
    {
        char name[20];
        int age;
        char father[20];
        char mother[20];
    };

    struct Family aile1;
    *aile1.mother = "anne";

    struct Family aile2;
    *aile2.mother = "anne";

    bool result = siblings(aile1, aile2);
    printf("Result %d", result);

    return 0;
}