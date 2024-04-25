#include <stdio.h>
#include <string.h>
int main()
{
    char ar[100001];
    scanf("%s", ar);
    int Length = strlen(ar);
    for (int i = 0; i < Length; i++)
    {
        if (ar[i] == ',')
        {
            ar[i] = ' ';
        }
        else if (ar[i] >= 'a' && ar[i] <= 'z')
        {
            ar[i] -= 32;
        }
        else
        {
            ar[i] += 32;
        }
    }
    printf("%s", ar);
    return 0;
}