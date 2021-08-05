#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//srandで初期化
void RandomReset(void)
{
    srand((unsigned)time(NULL));
}

//limit_upper ~ limit_lower からランダムにint型データを取得する
int RandomInt(int limit_lower,int limit_upper)
{
    //limit_upperとlimit_lowerの差が0以下だと誤作動を起こしかねないのでlimit_lowerを返す
    if(limit_upper - limit_lower <= 0){
        return limit_lower;
    }

    return rand()%(limit_upper - limit_lower + 1) + limit_lower;
}

//穴それぞれに番号をふる 事実上char型配列ならなんでも振り分けることが可能
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