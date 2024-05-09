#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    char ar[100001];
    int b;
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &b);
        char ar2[b];
        scanf("%s", ar2);
        int CountT = 0, CountP = 0;
        for (int j = 0; j < b; j++)
        {
            if (ar2[j] == 'T')
            {
                CountT++;
            }
            else if (ar2[j] == 'P')
            {
                CountP++;
            }
        }
        if (CountP > CountT)
        {
            printf("Pathaan\n");
        }
        else if (CountP < CountT)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}