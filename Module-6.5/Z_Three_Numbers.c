#include <stdio.h>

int main()
{
    int K, S, count = 0;
    scanf("%d %d", &K, &S);

    // Iterate through all possible values of X, Y, and Z
    for (int X = 0; X <= K; X++)
    {
        for (int Y = 0; Y <= K; Y++)
        {
            for (int Z = 0; Z <= K; Z++)
            {
                // Check if X + Y + Z equals S
                if (X + Y + Z == S)
                {
                    count++;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
