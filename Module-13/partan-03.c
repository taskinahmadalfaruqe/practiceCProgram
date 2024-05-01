#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int k = 1;
    while (a--)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", i);
        }
        k++;
        printf("\n");
    }

    return 0;
}