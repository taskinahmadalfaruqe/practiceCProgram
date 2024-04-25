#include <stdio.h>
#include <limits.h>
int main()
{
    int a;
    scanf("%d", &a);
    int ar[a];
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &ar[i]);
    }

    int minValue = ar[0];
    int minValueIndex = 0;
    int maxValue = ar[0];
    int maxValueIndex = 0;

    for (int b = 0; b < a; b++)
    {
        if (ar[b] < minValue)
        {
            minValue = ar[b];
            minValueIndex = b;
        }
        else if (ar[b] > maxValue)
        {
            maxValue = ar[b];
            maxValueIndex = b;
        }
    }

    ar[minValueIndex] = maxValue;
    ar[maxValueIndex] = minValue;

    for (int c = 0; c < a; c++)
    {
        printf("%d ", ar[c]);
    }
    return 0;
}


// Use Limit To Solve This Problem
// #include <stdio.h>
// #include <limits.h>

// int main()
// {
//     int N;
//     scanf("%d", &N);

//     int A[N];

//     // Input N numbers
//     for (int i = 0; i < N; i++)
//     {
//         scanf("%d", &A[i]);
//     }

//     // Find minimum and maximum values
//     int minValue = INT_MAX;
//     int maxValue = INT_MIN;
//     int minIndex = 0, maxIndex = 0;

//     for (int i = 0; i < N; i++)
//     {
//         if (A[i] < minValue)
//         {
//             minValue = A[i];
//             minIndex = i;
//         }

//         if (A[i] > maxValue)
//         {
//             maxValue = A[i];
//             maxIndex = i;
//         }
//     }

//     // Swap minimum and maximum values
//     int temp = A[minIndex];
//     A[minIndex] = A[maxIndex];
//     A[maxIndex] = temp;

//     // Print the array after replacement
//     for (int i = 0; i < N; i++)
//     {
//         printf("%d ", A[i]);
//     }

//     return 0;
// }
