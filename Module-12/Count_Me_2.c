#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100001];
    scanf("%s", ar);
    int length= strlen(ar);
    int value = 0;
    for (int i = 0; i < length; i++)
    {
        if (ar[i] == 'a' || ar[i] == 'e' || ar[i] == 'i' || ar[i] == 'o' || ar[i] == 'u')
        {
            value++;
        }
    }

    printf("%d", length-value);
    return 0;
}