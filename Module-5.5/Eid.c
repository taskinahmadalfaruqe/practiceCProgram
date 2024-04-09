#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int singleChildrenGifts= a/b;
    int giftRemains= a%b;
    printf("%d %d",singleChildrenGifts, giftRemains);

    return 0;
}