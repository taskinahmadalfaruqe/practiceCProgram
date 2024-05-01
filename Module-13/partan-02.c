#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int s = a - 1, k = 1;
    for (int i = 0; i < a; i++)
    {
        for (int b = 0; b < s; b++)
        {
            printf(" ");
        }
        for (int b = 0; b < k; b++)
        {
            printf("*");
        }
        s--;
        k += 2;
        printf("\n");
    }

    return 0;
}