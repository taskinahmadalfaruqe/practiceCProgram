// #include <stdio.h>
// #include <string.h>
// #include <limits.h>
// int print(int a)
// {
//     for (int i = 1; i <= a; i++)
//     {
//         printf("%d ", i);
//     }
// }
// int main()
// {
//     int a;
//     scanf("%d", &a);
//     print(a);
//     printf("\n");
//     return 0;
// }
#include <stdio.h>

void printNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" ");
        }
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    printNumbers(N);

    return 0;
}
