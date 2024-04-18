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
    int ans = 0;
    int b;
    scanf("%d", &b);
    for (int i = 0; i < a; i++)
    {
        if (ar[i] == b)
        {
            printf("%d", i);
            ans = 1;
            break;
        }
    }
    if (ans == 0)
    {
        printf("-1");
    }

    return 0;
}