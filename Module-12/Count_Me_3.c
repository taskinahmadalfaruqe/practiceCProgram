// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int a;
//     scanf("%d", &a);

//     for (int i = 0; i < a; i++)
//     {
//         char ar[10001];
//         scanf("%s", ar);
//         int value = strlen(ar);
//         int small = 0, Capital = 0, digit = 0;
//         for (int b = 0; b < value; b++)
//         {
//             if (ar[b] >= 'a' && ar[b] <= 'z')
//             {
//                 small++;
//             }
//             else if (ar[b] >= 'A' && ar[b] <= 'Z')
//             {
//                 Capital++;
//             }
//             else if (ar[b] >= '0' && ar[b] <= '9')
//             {
//                 digit++;
//             }
//         }
//         printf("%d %d %d\n", Capital, small, digit);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    while (a--)
    {
        char S[10001];
        scanf("%s", S);

        int capitalCount = 0, smallCount = 0, digitCount = 0;

        for (int i = 0; S[i] != '\0'; i++)
        {
            if (S[i] >= 'A' && S[i] <= 'Z') 
            {
                capitalCount++;
            }
            else if (S[i] >= 'a' && S[i] <= 'z') 
            {
                smallCount++;
            }
            else if (S[i] >= '0' && S[i] <= '9') 
            {
                digitCount++;
            }
        }
        printf("%d %d %d\n", capitalCount, smallCount, digitCount);
    }

    return 0;
}
