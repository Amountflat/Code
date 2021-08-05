#include <stdio.h>

int executionsystem(void);
void RandomReset(void);

int main(void)
{
    printf("Senmon Kikaku System Code Start Up\n");

    //初期化
    RandomReset();

    int error = executionsystem();

    return 0;
}