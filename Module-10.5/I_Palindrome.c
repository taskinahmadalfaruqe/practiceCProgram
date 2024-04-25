#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1001];
    scanf("%s", ar);
    int length = strlen(ar);
    int start = 0, end = length - 1, pal = 1;
    while (start < end)
    {
        if (ar[start] != ar[end])
        {
            pal = 0;
            break;
        }
        start++;
        end--;
    }
    if (pal)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char S[1001];
//     scanf("%s", S);

//     int len = strlen(S);
//     int isPalindrome = 1;
//     for (int i = 0; i < len / 2; i++)
//     {
//         if (S[i] != S[len - 1 - i])
//         {
//             isPalindrome = 0;
//             break;
//         }
//     }
//     if (isPalindrome)
//     {
//         printf("YES\n");
//     }
//     else
//     {
//         printf("NO\n");
//     }

//     return 0;
// }
