#include <stdio.h>
int main()
{
    // string initialize

    // Method-01
    char ar[4] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < 4; i++)
    {
        // printf("%c ", ar[i]);
    }

    // Method-02
    char arM2[6] = "taskin";
    for (int i = 0; i < 6; i++)
    {
        // printf("%c ", arM2[i]);
    }

    // Method-03 For Print Super Power
    char ar3[6] = "Taskin";
    // printf("%s",ar3);
    // Receive Output:
    // Taskintaskinabcd For Null

    // Method-04 Declare Null
    char ar4[7] = "Taskin\0";
    // printf("%s", ar4);

    // Method-05 Without Declare Null just increase array size 1;
    char ar5[100] = "Taskin Ahmad Al Faruqe";
    // printf("%s", ar5);
    
    return 0;
}