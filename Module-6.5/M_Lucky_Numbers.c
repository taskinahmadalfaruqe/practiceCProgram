#include <stdio.h>
int main()
{
    int A, B;
    int Lucky = 0;
    scanf("%d%d", &A, &B);
    for (int i = A; i <= B; i++)
    {
        if (isLucky(i))
        {
            printf("%d ", i);
            Lucky++;
        }
    }

    if (Lucky == 0)
    {
        printf("-1");
    }

    return 0;
}

int isLucky(int number)
{
    while (number > 0)
    {
        int digit = number % 10;
        if (digit != 4 && digit != 7)
        {
            return 0;
        }
        number /= 10;
    }
    return 1;
}
