#include <stdio.h>
#include <conio.h>

int checkhole[9] = {0};
int LED[9];
char displayedhole[10];

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
        if(cha >= '1' && cha >= '9'){
            for(int i = 0 ; i < 9 ; i++){
                if(cha == (char)(i + (int)'1')){
                    if(checkhole[(int)displayedhole[i] - (int)'0'] == 0){
                        checkhole[(int)displayedhole[i] - (int)'0'] = 1;
                        return (int)displayedhole[i] - (int)'0';
                    }
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

int check123Bingo(void)
{
    if(LED[0] == 1 && LED[1] == 1 && LED[2] == 1)
    {
        return 1;
    }

    return 0;
}

int check456Bingo(void)
{
    if(LED[3] == 1 && LED[4] == 1 && LED[5] == 1)
    {
        return 1;
    }

    return 0;
}

int check789Bingo(void)
{
    if(LED[6] == 1 && LED[7] == 1 && LED[8] == 1)
    {
        return 1;
    }

    return 0;
}

int check147Bingo(void)
{
    if(LED[0] == 1 && LED[3] == 1 && LED[6] == 1)
    {
        return 1;
    }

    return 0;
}

int check258Bingo(void)
{
    if(LED[1] == 1 && LED[4] == 1 && LED[7] == 1)
    {
        return 1;
    }

    return 0;
}

int check369Bingo(void)
{
    if(LED[2] == 1 && LED[5] == 1 && LED[8] == 1)
    {
        return 1;
    }

    return 0;
}

int check159Bingo(void)
{
    if(LED[0] == 1 && LED[4] == 1 && LED[8] == 1)
    {
        return 1;
    }

    return 0;
}

int check357Bingo(void)
{
    if(LED[2] == 1 && LED[4] == 1 && LED[6] == 1)
    {
        return 1;
    }

    return 0;
}

int checkVerticalBingo(void)
{
    if(check147Bingo() == 1 || check258Bingo() == 1 || check369Bingo() == 1){
        return 1;
    }

    return 0;
}

int checkBesideBingo(void)
{
    if(check123Bingo() == 1 || check456Bingo() == 1 || check789Bingo() == 1){
        return 1;
    }

    return 0;
}

int checkDiagonalBingo(void)
{
    if(check159Bingo() == 1 || check357Bingo() == 1){
        return 1;
    }

    return 0;
}

int checkBingo(void)
{
    if(checkVerticalBingo() == 1 || checkBesideBingo() == 1 || checkDiagonalBingo() == 1){
        return 1;
    }

    return 0;
}