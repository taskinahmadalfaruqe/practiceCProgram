#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T); 
    while (T--)
    {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);
        long long mul = A * B * C;
        if (mul == 0)
        {
            printf("0\n");
        }
        else
        {
            if (M % mul == 0)
            {
                printf("%lld\n", M / mul);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
    return 0;
}
