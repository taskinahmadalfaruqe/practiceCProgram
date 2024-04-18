#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int I, V;
    scanf("%d%d", &I, &V);
    ar[I] = V;
    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}