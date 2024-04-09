#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int fatherAge = (a / 5) * 4;
    int sonAge = a / 5;
    printf("%d %d", fatherAge, sonAge);
    return 0;
}