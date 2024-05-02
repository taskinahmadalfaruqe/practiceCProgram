#include <stdio.h>
#include <string.h>
#include <limits.h>

int count_before_one(int ar[], int a)
{
    int totalValue = 0;
    for (int i = 0; i < a; i++)
    {
        if (ar[i] == 1)
        {
            break;
        }
        else
        {
            totalValue++;
        }
    }
    return totalValue;
};
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }
    int size = count_before_one(ar, a);
    printf("%d", size);
    return 0;
}