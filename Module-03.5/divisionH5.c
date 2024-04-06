#include <stdio.h>
int main()
{
    int N;
    int a;
    scanf("%d", &N);
    if (N < 0)
    {
        printf("Please Inter A Positive Number:");
    }
    else
    {
        for (a = 1; a <= N; a++)
        {
            printf("%d ", a);
            if (a % 5 == 0)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
}