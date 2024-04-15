#include <stdio.h>
int main()
{
    int test, i;
    scanf("%d", &test);
    for (i = 1; i <= test; i++)
    {
        int a;
        scanf("%d", &a);
        do
        {
            int c = a % 10;
            printf("%d ", c);
            a /= 10;
        } while (a != 0);
        printf("\n");
    }

    return 0;
}