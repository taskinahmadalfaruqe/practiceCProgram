#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int s = a, k = 1;
    for (int i = 1; i <= (a * 2) - 1; i++)
    {
        for (int j = 1; j < s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            if (i%2==0)
            {
                printf("-");
            }else{
                printf("#");
            }
            
        }
        if (i <= a-1)
        {
            s--;
            k += 2;
        }
        else
        {
            s++;
            k -= 2;
        }

        printf("\n");
    }
    return 0;
}