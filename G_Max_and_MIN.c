#include <stdio.h>
#include <string.h>
#include <limits.h>
int countNumber(int ar[], int size)
{
    int minimumNumber = INT_MAX;
    int maxNumber = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (ar[i] < minimumNumber)
        {
            minimumNumber = ar[i];
        }
        if (ar[i] > maxNumber)
        {
            maxNumber = ar[i];
        }
    }
    printf("%d %d", minimumNumber, maxNumber);
}
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    countNumber(ar, a);
    return 0;
}