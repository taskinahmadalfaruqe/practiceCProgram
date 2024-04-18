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
    for (int i = 0; i < a; i++)
    {
        if (ar[i] <= 10)
        {
            printf("A[%d] = %d\n", i, ar[i]);
        }
    }
    return 0;
}