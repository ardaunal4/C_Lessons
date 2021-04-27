#include<stdio.h>
#include<stdlib.h>

int main(){

    struct time
    {
        int minute;
        int hour;
        int second;
    };
    
    struct date
    {
        int month;
        int day;
        int year;
    };
    
    struct dateAndTime
    {
        struct date sdate;
        struct time stime;
    };
    
    struct dateAndTime event;

    event.sdate.day = 15;
    event.sdate.month = 03;
    event.sdate.year = 2021;

    event.stime.second = 0;
    event.stime.minute = 30;
    event.stime.hour = 13;
    ++event.stime.second;

    // or it is possible to assign variable like
    struct dateAndTime event = {{2, 1, 2015}, {03, 30, 00}};
    // or
    struct dateAndTime event = 
    {
        {.month = 2, .day = 1, .year = 2015},
        {.hour = 03, .minute = 30, .second = 00}
    };
    /*it is possible to seet up an array of dateAndTime structures
    struct dataAndTime events[100];  
    it contains 100 elements.
    events[0].stime.hour = 12 ...
    */
    return 0;
}