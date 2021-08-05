#include <stdio.h>

int LED[9] = {0};

void SwitchLEDOnAndOff(int number)
{
    if(number > 0 && number < 10){
        LED[number - 1] ^= 1;
    }
}

void LEDLightning(void)
{
    printf("\n");
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            if(LED[i * 3 + j] == 1){
                printf("[]  ");
            }else{
                printf("<>  ");
            }
        }
        printf("\n\n");
    }
}