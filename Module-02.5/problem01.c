#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("A IS Geter Then B: %d:", a);
    }
    else if (a == b)
    {
        printf("A & B Both Are Equal.");
    }
    else
    {
        printf("B IS Geter Then A: %d:", b);
    }
    return 0;
}
