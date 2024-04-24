#include <stdio.h>
#include <string.h>
int main()
{
    char A[10000], B[10000];
    scanf("%s%s", A, B);
    int valueA = strlen(A);
    int valueB = strlen(B);

    printf("%d %d\n", valueA, valueB);
    printf("%s %s", A, B);

    return 0;
}