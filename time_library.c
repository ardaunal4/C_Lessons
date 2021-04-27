#include<stdio.h>
#include<time.h>
#include <unistd.h>

int main()
{
    /*
    time_t now;

    time(&now);
    printf("It is now %s\n", ctime(&now));

    */

    // specific date variables
    
    
    time_t clock;

    float t1 = time(NULL);
    printf("Wait!\n");
    sleep(2);
    printf("Done!\n");

    time_t now;
    struct tm *timestamp;

    time(&now);
    timestamp = localtime(&now);

    printf("It is now %d:%d:%d\n",
            timestamp->tm_hour,
            timestamp->tm_min,
            timestamp->tm_sec);

    return 0;
}