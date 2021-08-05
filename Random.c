#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomReset()
{
    srand((unsigned)time(NULL));
}

int RandomInt(int limit_lower,int limit_upper)
{
    if(limit_upper - limit_lower == 0){
        return limit_lower;
    }
    return rand()%(limit_upper - limit_lower + 1) + limit_lower;
}

int RandomHole(char Line[])
{
    char num[] = "123456789";

    for(int i = 0 ; Line[i] != '\0' ; i++){
        int count = 0;
        for(count = 0; num[count+1] != '\0' ; count++);
        int number = RandomInt(0,count);
        Line[i] = num[number];
        for(int j = number ; num[j] != '\0' ; j++){
            num[j] = num[j+1];
        }
    }
}