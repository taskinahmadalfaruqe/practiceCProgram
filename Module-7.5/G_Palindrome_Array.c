#include <stdio.h>
int main()
{
    int a, count=0;
    scanf("%d", &a);
    int ar1[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar1[i]);
    }

    int ar2[a];
    for (int i = 0; i < a; i++)
    {
        int newValue = ar1[i];
        ar2[i] = newValue;
    }

    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d ", ar2[i]);
    }
    for (int i = 0; i < a; i++)
    {
        if (ar1[i] != ar2[2])
        {
            printf("NO");
            break;
        }
    }
    printf("YES");

    return 0;
}