#include <stdio.h>
#include <time.h>

clock_t StartTime = (clock_t)0;

//開始の時間を記録
void StartTimeSet()
{
    StartTime = clock();
}

//制限時間 超えたら1 まだなら0
int TimeCheckOver()
{
    //制限時間n秒 1000 * n
    int limittime = 1000 * 10;

    if(clock() - StartTime > limittime){
        return 1;
    }
    //printf("%d\n",(limittime - clock() + StartTime) / 1000);
    return 0;
}