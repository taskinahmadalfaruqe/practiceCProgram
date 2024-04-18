#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < a; i++)
    {
        sum = sum + ar[i];
    }
    printf("%d", sum);

    return 0;
}