#include <stdio.h>
#include <conio.h>

char hole[] = "123456789";

void Disp(char disp[]);
int RandomHole(char Line[]);
int TimeCheckOver();

int executionsystem(void)
{
    while(1){
        RandomHole(hole);
        Disp(hole);

        if(kbhit() != 0 || TimeCheckOver() != 0){
            break;
        }
    }
}