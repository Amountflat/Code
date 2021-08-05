#include <stdio.h>
#include <conio.h>

int executionsystem();

int main(void)
{
    printf("Senmon Kikaku System Code Start Up\n");

    int error = 0;

    while(1){
        error = executionsystem();
        if(kbhit() != 0 || error == 1){
            break;
        }
    }

    return 0;
}