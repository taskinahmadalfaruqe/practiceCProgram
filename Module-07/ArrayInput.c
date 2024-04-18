#include <stdio.h>
int main()
{
    // input 5 array value.
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int a = 0; a < 5; a++)
    {
       printf("%d ", ar[a]);
    }
    return 0;
}