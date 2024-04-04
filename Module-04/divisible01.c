#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N < 0)
    {
        printf("Please Inter A Positive Number:");
    }
    else
    {
        if (N % 3 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}