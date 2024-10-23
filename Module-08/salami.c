#include <stdio.h>

int main()
{
    int N;

    scanf("%d", &N);
    int salami[N];


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &salami[i]);
    }


    int maxSalami = salami[0];
    for (int i = 1; i < N; i++)
    {
        if (salami[i] > maxSalami)
        {
            maxSalami = salami[i];
        }
    }


    for (int i = 0; i < N; i++)
    {
        printf("%d ", maxSalami - salami[i]);
    }
    return 0;
}
