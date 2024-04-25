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
    int count2 = 0, count3 = 0;
    for (int i = 0; i < a; i++)
    {
        if (ar[i] % 2 == 0 && ar[i] % 3 == 0)
        {
            count2++;
        }
        else if (ar[i] % 2 == 0)
        {
            count2++;
        }
        else if (ar[i] % 3 == 0)
        {
            count3++;
        }
    }
    printf("%d %d", count2, count3);
    return 0;
}