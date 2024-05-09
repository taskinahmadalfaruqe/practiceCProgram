#include <stdio.h>

int main()
{
    int N, B;
    scanf("%d", &N);
    if (N == 1)
    {
        B = 6;
    }
    else if (N == 3)
    {
        B = 7;
    }
    else if (N == 5)
    {
        B = 8;
    }
    else if (N == 7)
    {
        B = 9;
    }
    else if (N == 9)
    {
        B = 10;
    }
    else if (N == 11)
    {
        B = 11;
    }
    else if (N == 13)
    {
        B = 12;
    }
    else if (N == 15)
    {
        B = 13;
    }
    else if (N == 17)
    {
        B = 14;
    }
    else if (N == 19)
    {
        B = 15;
    }
    else if (N == 21)
    {
        B = 16;
    }
    int s = B, kaj = 1;
    // Print upper part of the tree
    for (int i = 0; i < B; i++)
    {
        // Print spaces
        for (int j = 1; j < s; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (int k = 1; k <= kaj; k++)
        {
            printf("*");
        }
        kaj += 2;
        s -- ;
        printf("\n");
    }

    // Print base of the tree
    for (int i = 0; i < 5; i++)
    {
        // Print spaces
        for (int j = 0; j < 5; j++)
        {
            printf(" ");
        }
        for (int i = 0; i < N; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}