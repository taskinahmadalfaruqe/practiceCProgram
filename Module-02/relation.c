#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("A is Geter Then B:%d", a);
    }
    else if (a < b)
    {
        printf("B is Geter Then A:%d", b);
    }
    else
    {
        printf("A & B Are Equal:%d==%d", a, b);
    }

    return 0;
}
