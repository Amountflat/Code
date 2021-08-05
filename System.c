#include <stdio.h>

char hole[] = "123456789";

void Disp(char disp[]);

int RandomHole(char Line[]);

int executionsystem(void)
{
    RandomHole(hole);
    Disp(hole);
    return 1;
}