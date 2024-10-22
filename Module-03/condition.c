#include <stdio.h>

int main()
{
    int tourDays;
    printf(" Enter Your Tour days :\n ");
    scanf("%d", &tourDays);

    if (tourDays == 2 || tourDays == 4)
    {
        if (tourDays == 2)
        {
            int raining;
            printf(" If outside is raining preach : 1 \n ");
            scanf("%d", &raining);
            if (raining == 1)
            {
                printf("No Boot Available\n");
                printf("Go Srimongol");
            }
            else
            {
                printf("Go To TangurHaouar");
            }
        }
        else
        {
            int isHolyday;
            printf("Input 1 if holyday or input 0 : \n");
            scanf("%d", &isHolyday);
            if (isHolyday == 1)
            {
                printf("NO SHIP AVAILABLE \n");
                printf("Go To Coxes Bazar");
            }
            else
            {
                printf("Pack your Bag and go to sentmartin");
            }
        }
    }
    else
    {
        printf(" STAY HOME!!");
    }

    return 0;
}