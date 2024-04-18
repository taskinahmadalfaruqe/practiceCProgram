#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int positiveSum = 0, NegativeSum = 0;
    for (int i = 0; i < a; i++)
    {
        if (ar[i] > 0)
        {
            positiveSum += ar[i];
        }
        else if (ar[i] < 0)
        {
            NegativeSum += ar[i];
        }
    }
    printf("%d %d", positiveSum, NegativeSum);

    return 0;
}