#include <stdio.h>
#include <string.h>
int main()
{
    char ar[1000001];
    scanf("%s", ar);

    int length = strlen(ar);
    long long int sum = 0;
    for (int i = 0; i < length; i++)
    {
        int value = ar[i] - '0';
        sum += value;
    }
    printf("%d", sum);
    return 0;
}