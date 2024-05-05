#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int k = a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = k; j > 0; j--)
        {
            printf("*");
        }
        k--;
        printf("\n");
    }

    return 0;
}