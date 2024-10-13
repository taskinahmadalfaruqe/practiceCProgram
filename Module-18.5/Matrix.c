#include <stdio.h>
#include <string.h>
#include <limits.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int ar[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    for (int a = 0; a < row; a++)
    {
        for (int i = col-1; i >= 0; i--)
        {
            printf("%d ", ar[a][i]);
        }
        printf("\n");
    }
    return 0;
}