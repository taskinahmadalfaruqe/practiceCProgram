#include <stdio.h>
#include <string.h>
#include <limits.h>
int sum(int x, int y)
{
    int summation = x + y;
    return summation;
}
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    int summation = sum(a, b);
    printf("%d", summation);

    return 0;
}