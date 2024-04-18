#include<stdio.h>
int main()
{
    int ar[5]; //declare an array and assign an array value.
    ar[0]=10;
    ar[1]=100;
    ar[2]=100;
    ar[3]=1000;
    ar[4]=10000;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",ar[i]);
    }
    
    return 0;
}