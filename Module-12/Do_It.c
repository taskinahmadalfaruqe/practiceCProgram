#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    while (a--)
    {
        for (int i = 1; i <= b; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}