#include <stdio.h>
int main()
{
    int a; 
    scanf("%d", &a);
    while (a--)
    {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int totalWork = M1 * D;
        int totalWorkPerDay = M1 + M2;
        int newDaysRequired = totalWork / totalWorkPerDay;
        int lessDay= D-newDaysRequired;
        printf("%d\n", lessDay);
    }
    return 0;
}