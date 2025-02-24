#include <stdio.h>
int main()
{
    int N;
    int i;
    scanf("%d", &N);
    if (N < 0)
    {
        printf("Please Input A Positive Numbe");
    }
    else
    {
        for (i = 0; i < N; i++)
        {
            printf("I Love Practice\n");
        }
    }
}