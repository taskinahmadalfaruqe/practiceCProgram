#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a, k = 1, s;
    scanf("%d", &a);
    s = a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        k += 2;
        s--;
        printf("\n");
    }

    return 0;
}