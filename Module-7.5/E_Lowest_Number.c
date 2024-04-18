#include <stdio.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int minimumNumber = INT_MAX, position;

    for (int i = 0; i < a; i++)
    {
        if (ar[i] < minimumNumber)
        {
            minimumNumber = ar[i];
            position = i+1;
        }
    }
    printf("%d %d", minimumNumber, position);
    return 0;
}