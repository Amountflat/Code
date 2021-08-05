#include <stdio.h>

int checkChar(char cha,char num[])
{
    for(int i = 0 ; num[i] != '\0' ; i++){
        if(cha == num[i]){
            return 1;
        }
    }

    return 0;
}