#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int firstNumber = a / 1000;
    if (firstNumber % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}