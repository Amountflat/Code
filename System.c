#include <stdio.h>
#include <conio.h>

char hole[] = "123456789";

void Disp(char disp[]);
int RandomHole(char Line[]);
int TimeCheckOver();
void StartTimeSet();

int executionsystem(void)
{
    //このwhileはloop()の再現
    //aでスタート 実行してないときにeでEND
    while(1){
        if(kbhit() != 0){
            char cha = getch();

            //実行部スタート(loop())
            if(cha == 'a'){
                StartTimeSet();
                while(1){
                    RandomHole(hole);
                    Disp(hole);

                    if(kbhit() != 0 && getch() != 'a'){
                        break;
                    }
                    if(kbhit() != 0 || TimeCheckOver() != 0){
                        break;
                    }
                }
            }
            //実行部エンド

            if(cha == 'e'){
                break;
            }
        }
    }
}