#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int k = a;
    for (int i = 0; i < a; i++)
    {
        for (int b = 0; b < k; b++)
        {
            printf("*");
        }

        k--;
        printf("\n");
    }

    return 0;
}