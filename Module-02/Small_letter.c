#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= '0' && a <= '9')
    {
        printf("Input Number is: %c, And Output Number Is: %c", a, a);
    }
    else
    {
        if (a >= 'a' && a <= 'z')
        {
            printf("Input Lowercase: %c, Output Uppercase: %c", a, a - 32);
        }
        else if (a >= 'A' && a <= 'Z')
        {
            printf("Input Uppercase: %c, Output Lowercase: %c", a, a + 32);
        }
        else
        {
            printf("Input Value Is Not A Number Or Letter");
        }
    }
    return 0;
}