#include <stdio.h>
#include <time.h>

clock_t StartTime = (clock_t)0;

void StartTimeSet()
{
    StartTime = clock();
}

int TimeCheckOver()
{
    int limittime = 1000 * 10;
    if(clock() - StartTime > limittime){
        return 1;
    }
    //printf("%d\n",(limittime - clock() + StartTime) / 1000);
    return 0;
}