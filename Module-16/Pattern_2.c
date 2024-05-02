#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int s = a, k = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j < s; j++)
        {
            printf(" ");
        }
        for (int b = i; b >0; b--)
        {
            printf("%d", b);
        }

        s--;
        printf("\n");
    }

    return 0;
}