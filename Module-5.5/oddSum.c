#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d", &a);
    if (a % 2 != 0)
    {
        printf("Error: a Should be a positive number.\n");
        return 1;
    }
    int start = a / 4 - 3;
    for (i = 0; i < 4; i++)
    {
        printf("%d ", start+(2*i));
    }
    return 0;
}