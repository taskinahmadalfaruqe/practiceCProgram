#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int H;
    scanf("%d", &H);
    while (H--)
    {
        int a;
        scanf("%d", &a);
        int ar1[a], ar2[a], ar3[a];
        for (int i = 0; i < a; i++)
        {
            scanf("%d", &ar1[i]);
        }
        // copy array
        for (int i = 0; i < a; i++)
        {
            ar2[i] = ar1[i];
        }

        for (int i = 0; i < a - 1; i++)
        {
            for (int j = 0; j < a - i - 1; j++)
            {
                if (ar2[j] > ar2[j + 1])
                {
                    int temp = ar2[j];
                    ar2[j] = ar2[j + 1];
                    ar2[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < a; i++)
        {
            int value = ar1[i] - ar2[i];
            if (value < 0)
            {
                value = value * -1;
            }
            ar3[i] = value;
        }

        for (int i = 0; i < a; i++)
        {
            printf("%d ", ar3[i]);
        }
        printf("\n");
    }

    return 0;
}

// a= 2 4 5 6 5 1
// b= 1 2 4 5 5 6
// c= 1 2 1 1 0 5