#include <stdio.h>
int main()
{
    int a, i = 1;
    int maxNumber = 0, b;
    scanf("%d", &a);
    while (i <= a)
    {
        scanf("%d", &b);
        if (b > maxNumber)
        {
            maxNumber = b;
        }
        i++;
    }
    printf("%d", maxNumber);
    return 0;
}