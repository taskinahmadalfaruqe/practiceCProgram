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
        /* code */
        if (ar[i] > 0)
        {
            ar[i] = 1;
            printf("%d ", ar[i]);
        }
        else if (ar[i] < 0)
        {
            ar[i] = 2;
            printf("%d ", ar[i]);
        }
        else
        {
            printf("%d ", ar[i]);
        }
    }

    return 0;
}