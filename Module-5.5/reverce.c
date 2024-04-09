#include <stdio.h>

int main()
{
    int N, digit;
    scanf("%d", &N);
    while (N > 0)
    {
        digit = N % 10;
        printf("%d", digit);
        N /= 10;
    }
    return 0;
}
