#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i;
    long long int sum = 0;
    for (i = 1; i <= a; i++)
    {
        sum = sum + i;
    }
    printf("%lld", sum);
    return 0;
}