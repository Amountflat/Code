#include <stdio.h>

int executionsystem();
void StartTimeSet();
void RandomReset();

int main(void)
{
    printf("Senmon Kikaku System Code Start Up\n");
    StartTimeSet();
    RandomReset();

    int error = executionsystem();

    return 0;
}