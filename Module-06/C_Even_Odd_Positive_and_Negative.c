#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int i, even = 0, odd = 0, positive = 0, negative = 0;

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else if (a % 2 == 1 || a % 2 == -1)
        {
            odd++;
        }

        if (a > 0)
        {
            positive++;
        }
        else if (a < 0)
        {
            negative++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
    return 0;
}