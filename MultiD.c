#include <stdio.h>

void addMatrix(int row, int col, int a[row][col], int b[row][col]);

int main()
{
    int row, col;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &row, &col);

    int a[row][col], b[row][col];

    printf("Enter First Matrix Elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Second Matrix Elements:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    addMatrix(row, col, a, b);

    return 0;
}

void addMatrix(int row, int col, int a[row][col], int b[row][col])
{
    int sum[row][col];

    printf("\nSum of Two Matrices:\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
}
