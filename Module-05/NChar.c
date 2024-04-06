#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 'a' && a <= 'z')
    {
        int CapitalNumber = a - 32;
        printf("%c", CapitalNumber);
    }
    else
    {
        int SmallLater = a + 32;
        printf("%c", SmallLater);
    }
    return 0;
};