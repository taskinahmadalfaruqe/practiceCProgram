#include <stdio.h>
int main()
{
    int x,i=1;
    scanf("%d", &x);
    if (x <= 1)
    {
        printf("-1");
    }
    while (i<=x)
    {
        if (i%2==0)
        {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}