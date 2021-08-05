#include <stdio.h>
#include <conio.h>

int executionsystem();

void RandomReset();

int main(void)
{
    printf("Senmon Kikaku System Code Start Up\n");

    RandomReset();

    int error = 0;

    while(1){
        error = executionsystem();
        if(kbhit() != 0 || error != 0){
            break;
        }
    }

    return 0;
}