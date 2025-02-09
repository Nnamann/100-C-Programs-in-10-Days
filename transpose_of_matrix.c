//Write a program to find transpose of a matrix


#include <stdio.h>

int main()
{
    int m, n, i, j;
    printf("Enter the number of rows and columns in the matrix: ");
    scanf("%d %d", &m, &n);

    int a[m][n], b[n][m];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Transpose the matrix
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("\nTRANSPOSE OF THE MATRIX:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}