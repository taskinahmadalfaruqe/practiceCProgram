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

    for (int i = a - 1; i >= 0; i--)
    {
        if (i % 2 == 1){
            printf("%d ", ar[i]);
        }
    }
    return 0;
}