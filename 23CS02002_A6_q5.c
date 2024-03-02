#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter the size of the matrix:\n");
    scanf("%d%d", &r, &c);

    int matrix[r][c];
    printf("Enter the matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}