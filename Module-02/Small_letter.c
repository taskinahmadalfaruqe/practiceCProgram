#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= '0' && a <= '9')
    {
        printf("It's Not A Alphabet Input A Alphabet.");
    }
    else
    {
        if (a >= 'a' && a <= 'z')
        {
            Printf("%c", a+32);
        }
    }
    return 0;
}