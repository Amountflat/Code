#include <stdio.h>
#include <conio.h>

int checkhole[9] = {0};

int CharArraySize(char cha[])
{
    int count = 0;
    for(count = 0 ; cha[count + 1] != '\0' ; count++);

    return count;
}

//渡されたchar型chaがchar型num配列に含まれているかのチェック
int checkChar(char cha,char num[])
{
    for(int i = 0 ; num[i] != '\0' ; i++){
        if(cha == num[i]){
            return 1;
        }
    }

    return 0;
}

int checkCharArray(char array1[],char array2[])
{
    if(CharArraySize(array1) != CharArraySize(array2)){
        return 0;
    }

    for(int i = 0 ; array1[i] != '\0' || array2[i] != '\0' ; i++){
        if(array1[i] != array2[i]){
            return 0;
        }
    }

    return 1;
}

int checkBallInHole(void)
{
    if(kbhit() != 0){
        char cha = getch();
        printf("%c\n",cha);
        for(int i = 0 ; i < 9 ; i++){
            if(cha == (char)(i + (int)'1')){
                if(checkhole[i] == 0){
                    checkhole[i] = 1;
                    return i + 1;
                }
            }
        }
    }else{
        for(int i = 0 ; i < 9 ; i++){
            checkhole[i] = 0;
        }
    }

    return 0;
}