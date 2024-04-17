#include <stdio.h>
int main()
{
    char A;
    scanf("%c", &A);
    if (A == 'z')
    {
        printf("%c", 'a');
    }

    else if (A >= 'a' || A <= 'z')
    {
        printf("%c", A + 1);
    }

    return 0;
}