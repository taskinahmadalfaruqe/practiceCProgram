#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int countZero = 0, countOne = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 0)
        {
            countZero++;
        }
        else
        {
            countOne++;
        }
    }
    printf("%d %d", countZero, countOne);

    return 0;
}