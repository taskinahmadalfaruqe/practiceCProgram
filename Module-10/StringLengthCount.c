#include <stdio.h>
#include <string.h>
int main()
{
    // string length
    char ar[100];
    scanf("%s", ar);

    int fCount = 0, count = 0, i = 0;
    // String length count with for loop

    for (int z = 0; ar[z] != '\0'; z++)
    {
        fCount++;
    }

    // string length count with while loop
    while (ar[i] != '\0')
    {
        count++;
        i++;
    }

    // string Length Count With Build In Function strlen();

    int strLength = strlen(ar);

    printf("For Loop- %d\nWhile Loop- %d\nString Length-%d", fCount, count, strLength);

    // printf("%s", ar);
    return 0;
}
