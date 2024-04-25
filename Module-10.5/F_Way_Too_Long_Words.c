#include <stdio.h>
#include <string.h>
int main()
{
    int A;
    scanf("%d", &A);
    for (int i = 0; i < A; i++)
    {
        char ar[101];
        scanf("%s", ar);
        int StringLength = strlen(ar);
        if (StringLength > 10)
        {
            printf("%c%d%c\n", ar[0], StringLength - 2, ar[StringLength - 1]);
        }
        else
        {
            printf("%s\n", ar);
        }
    }

    return 0;
}