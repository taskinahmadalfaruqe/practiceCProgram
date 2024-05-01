#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a, k = 1;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        for (int b = 0; b < k; b++)
        {
            printf("*");
        }
        k++;
        printf("\n");
    }

    return 0;
}