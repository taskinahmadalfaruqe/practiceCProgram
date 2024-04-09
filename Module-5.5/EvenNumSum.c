#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    if (N % 2 != 0)
    {
        printf("Invalid input: N should be an even number.\n");
        return 1;
    }
    int start = N / 5 - 4;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", start + 2 * i);
    }
    return 0;
}
