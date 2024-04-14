#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int step = a / 3;
    int reminderStep = a % 3;
    if (reminderStep == 1 || reminderStep == 2)
    {
        step = step + 1;
    }
    printf("%d", step);

    return 0;
}