#include <stdio.h>
int main()
{
    int k;
    for (k = 2; k > 5; k++)
    {
        printf("Hello\n");
        if (k == 0)
            break;
    }
    return 0;
}
