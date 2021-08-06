#include <stdio.h>
#include <conio.h>

char hole[] = "123456789";

void Disp(char disp[]);
int RandomHole(char Line[]);
int TimeCheckOver(void);
void StartTimeSet(void);
int checkChar(char cha,char num[]);
int checkBallInHole(void);
void SwitchLEDOnAndOff(int number);
void LEDInit(void);
int checkBingo(void);

int executionsystem(void)
{
    //このwhileはloop()の再現
    //aでスタート 実行してないときにeでEND
    while(1){
        if(kbhit() != 0){
            char cha = getch();
            char num[] ="a123456789";

            //実行部スタート(loop())
            if(cha == 'a'){
                StartTimeSet();
                RandomHole(hole);
                LEDInit();

                while(1){
                    Disp(hole);

                    int CheckHole = checkBallInHole();

                    if(CheckHole != 0){
                        SwitchLEDOnAndOff(CheckHole);
                        RandomHole(hole);
                    }
                    if(kbhit() != 0){
                        if(!checkChar(getch(),num)){
                            break;
                        }
                    }
                    if(TimeCheckOver() != 0 || checkBingo() != 0){
                        break;
                    }
                }

                Disp(hole);

                printf("END\n");
            }
            //実行部エンド

            if(cha == 'e'){
                break;
            }
        }
    }
}