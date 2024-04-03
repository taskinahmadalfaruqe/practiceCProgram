#include <stdio.h>
int main()
{
    int k;
    for (k = 3; k > 5; k++)
    {
        printf("Hello\n");
        if (k == 0)
            break;
    }
    return 0;
}
