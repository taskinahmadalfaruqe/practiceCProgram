#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int sum, flag = 0;
    scanf("%d", &sum);
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (ar[i] + ar[j] == sum)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}