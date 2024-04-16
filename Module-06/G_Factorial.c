#include <stdio.h>
int main()
{
    int i = 0, p;
    scanf("%d", &p);

    while (i < p)
    {
        int a;
        scanf("%d", &a);
        long long int factorial = 1;
        for (int y = 1; y <= a; y++)
        {
            factorial = factorial * y;
        }
        printf("%lld\n", factorial);
        i++; // Increment i to avoid infinite loop
    }
    return 0;
}