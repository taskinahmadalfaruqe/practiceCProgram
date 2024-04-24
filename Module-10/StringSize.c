#include <stdio.h>
int main()
{
    char ar[100];
    scanf("%s", ar);
    int size = sizeof(ar);
    printf("%d", size);
    return 0;
}