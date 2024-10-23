#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }

    scanf("%d", &b);

    if (b >= 0 && b <= a)
    {
        if (ar[b - 1] == 0)
        {
            ar[b - 1] = 1;
        }
        else
        {
            ar[b - 1] = 0;
        }
    }
    for (int i = 0; i < a; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}