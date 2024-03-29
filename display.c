#include <stdio.h>

int checkChar(char cha,char num[]);
int checkCharArray(char array1[],char array2[]);
void LEDLightning(void);

char displayedhole[10] = "000000000";

//Line0~4は7segにあてはめた表示をさせる
void Line0(char cha)
{
    char num1[] = "023456789";
    if(checkChar(cha,num1)){
        printf("[]");
    }else{
        printf("  ");
    }

    char num2[] = "02356789";
    if(checkChar(cha,num2)){
        printf("[][][][]");
    }else{
        printf("        ");
    }

    char num3[] = "0123456789";
    if(checkChar(cha,num3)){
        printf("[]");
    }else{
        printf("  ");
    }
}

void Line1(char cha)
{
    char num1[] = "045689";
    if(checkChar(cha,num1)){
        printf("[]");
    }else{
        printf("  ");
    }

    printf("        ");

    char num2[] = "01234789";
    if(checkChar(cha,num2)){
        printf("[]");
    }else{
        printf("  ");
    }
}

void Line2(char cha)
{
    char num1[] = "02345689";
    if(checkChar(cha,num1)){
        printf("[]");
    }else{
        printf("  ");
    }

    char num2[] = "2345689";
    if(checkChar(cha,num2)){
        printf("[][][][]");
    }else{
        printf("        ");
    }

    char num3[] = "0123456789";
    if(checkChar(cha,num3)){
        printf("[]");
    }else{
        printf("  ");
    }
}

void Line3(char cha)
{
    char num1[] = "0268";
    if(checkChar(cha,num1)){
        printf("[]");
    }else{
        printf("  ");
    }

    printf("        ");

    char num2[] = "013456789";
    if(checkChar(cha,num2)){
        printf("[]");
    }else{
        printf("  ");
    }
}

void Line4(char cha)
{
    char num1[] = "0235689";
    if(checkChar(cha,num1)){
        printf("[]");
    }else{
        printf("  ");
    }

    char num2[] = "0235689";
    if(checkChar(cha,num2)){
        printf("[][][][]");
    }else{
        printf("        ");
    }

    char num3[] = "0123456789";
    if(checkChar(cha,num3)){
        printf("[]");
    }else{
        printf("  ");
    }
}

//受け取ったchar型disp配列を7seg表示する
void Disp(char disp[])
{
    if(!checkCharArray(displayedhole,disp)){
        LEDLightning();
        printf("\n");
        for(int i = 0 ; i < 7 ; i++){
            for(int j = 0 ; disp[j] != '\0' ; j++){
                char num[] = "0123456789";
                if(checkChar(disp[j],num)){
                    switch (i)
                    {
                        case 0: Line0(disp[j]); break;
                        case 1:
                        case 2: Line1(disp[j]); break;
                        case 3: Line2(disp[j]); break;
                        case 4:
                        case 5: Line3(disp[j]); break;
                        case 6: Line4(disp[j]); break;
                    }

                    printf("   ");
                }
            }
            printf("\n");
        }
        printf("\n");

        for(int i = 0 ; disp[i] != '\0' ;i++){
            displayedhole[i] = disp[i];
        }
    }
}