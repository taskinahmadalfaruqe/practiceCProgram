#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N<=20)
    {
        printf("Please Inter 21 or Bigger Number:");
    }
    else
    {
        for (int i = 21; i <= N; i++)
        {
            if (i % 3 == 0 && i % 7 == 0)
            {
                printf("%d\n", i);
            }
        }
    }
}