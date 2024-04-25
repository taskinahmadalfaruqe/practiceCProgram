#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    char ar1[11], ar2[11];
    scanf("%s%s", ar1, ar2);
    // String Length Find
    int Array01 = strlen(ar1);
    int Array02 = strlen(ar2);
    printf("%d %d\n", Array01, Array02);

    // string Concat;
    char sumOfArray[22];
    int i;
    for (i = 0; i < Array01; i++)
    {
        sumOfArray[i] = ar1[i];
    }
    int ab = 0;
    for (i; i < Array01 + Array02; i++)
    {
        sumOfArray[i] = ar2[ab];
        ab++;
    }
    sumOfArray[i] = '\0';
    printf("%s\n", sumOfArray);

    // Value Swap
    char basket = ar1[0];
    ar1[0] = ar2[0];
    ar2[0] = basket;
    printf("%s %s", ar1, ar2);
    return 0;
}
