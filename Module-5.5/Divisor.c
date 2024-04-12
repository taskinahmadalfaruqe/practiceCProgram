#include <stdio.h>
int main()
{
    int D, Q, R;
    scanf("%d%d%d", &D, &Q, &R);
    int a = (D - R) / Q;
    printf("%d", a);
    return 0;
}