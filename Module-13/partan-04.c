#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int s = a - 1, k = 1;
    for (int i = 1; i <= (a * 2) - 1; i++)
    {
        for (int i = 0; i <s; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }
        if(i<=a-1)
        {
            s--;
            k=k+2;
        }
        else
        {
            s++;
            k=k-2;
        }

        printf("\n");
    }

    return 0;
}