#include <stdio.h>

int main()
{
    char number;
    printf("Enter what you want :\n");
    scanf("%c", &number);
    if (number >= '0' && number <= '9')
    {
        printf("IT IS A NUMBER: %c\n", number);
    }
    else
    {
        printf("ALPHA \n");
        if (number >= 'A' && number <= 'Z')
        {
            printf("IT IS A CAPITAL DIGIT: %c\n", number);
        }
        else
        {
            printf("IT IS A SMALL DIGIT: %c\n", number);
        }
    }
    return 0;
}