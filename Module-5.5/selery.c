#include <stdio.h>
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int a;
    int year = 365;
    scanf("%lld", &a);
    if (a <= 0)
    {
        printf("Enter A Positive Number:");
    }
    else
    {
        long long int salary = year * a;
        printf("%lld", salary);
    }

    return 0;
}
