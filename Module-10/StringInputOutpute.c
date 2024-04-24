#include <stdio.h>
#include <string.h>
int main()
{
    // input string without space;
    char ar[100];
    // scanf("%s",&ar); //Without Space.

    // Input String With Space.
    //  gets(ar);

    // Input String With Space And Enter.
    fgets(ar, 111, stdin);
    printf("%s", ar);
    return 0;
}