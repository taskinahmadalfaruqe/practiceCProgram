#include <stdio.h>
#include <string.h>
#include <limits.h>

void odd_even()
{

    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int even = 0, odd = 0;
    for (int j = 0; j < a; j++)
    {
        if (ar[j] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d", even, odd);
}
int main()
{
    odd_even();
    return 0;
}