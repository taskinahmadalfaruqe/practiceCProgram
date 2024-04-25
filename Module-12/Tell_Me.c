#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    while (a--)
    {
        int b;
        scanf("%d", &b);
        int ar[b];
        for (int i = 0; i < b; i++)
        {
            scanf("%d", &ar[i]);
        }
        int c;
        scanf("%d", &c);
        int find = 1;
        for (int d = 0; d < b; d++)
        {
            if (ar[d] == c)
            {
                find = 1;
                break;
            }
            else
            {
                find = 0;
            }
        }
        if (find)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
        
    }

    return 0;
}