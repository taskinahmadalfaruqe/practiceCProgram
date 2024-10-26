#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d%d", &b, &c);
    if (b >= 0 && b <= a)
    {
        ar[b - 1] = c;
        for (int i = 0; i < a; i++)
        {
            printf("%d ", ar[i]);
        }
    }
    else
    {
        for (int i = 0; i < a; i++)
        {
            printf("%d ", ar[i]);
        }
    }

    return 0;
}

// Add A New Array And Change Any Value Of this Array Index if array dont exjist then print previous array.