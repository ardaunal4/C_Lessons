#include<stdio.h>
#include<stdbool.h>

enum week{Mon=10, Tue, Wed, Thur, Fri=10, Sat=16, Sun};
enum day{Mond, Tues, Wedn, Thurs, Frid=18, Satu=11, Sund};

int main(){

    int integerVar = 123;
    float floatVar = 155.12;
    double doubleVar = 8.44e+11;

    _Bool boolVar = 0; // there is another way to define bool after include a library which is stdbool.h

    bool boolVar2 = true; // with using stdbool.h lib, we are able to use true and false instead of 1 and 0. Also we can directly define bool variable with bool.
    bool boolVar3 = false;

    enum gender {male, female}; // it is a user defined datatype
    enum gender myGender;
    myGender = male;
    enum gender anotherGender = female;

    char charVar = 'a';
    printf("%c", charVar);

    printf("\nThe value of enum week: %d\t%d\t%d\t%d\t%d\t%d\t%d\n\n",Mon , Tue, Wed, Thur, Fri, Sat, Sun);
    printf("The default value of enum day: %d\t%d\t%d\t%d\t%d\t%d\t%d",Mond , Tues, Wedn, Thurs, Frid, Satu, Sund);

    return 0;
}