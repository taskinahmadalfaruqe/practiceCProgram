#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int lastDigit = a % 10;
    int firstDigit = a / 10;
    if (firstDigit == 0 || lastDigit == 0)
    {
        printf("YES");
    }

    else if (firstDigit % lastDigit == 0 || lastDigit % firstDigit == 0)
    {
        printf("YES\n");
    }

    else
    {
        printf("NO\n");
    }

    return 0;
}