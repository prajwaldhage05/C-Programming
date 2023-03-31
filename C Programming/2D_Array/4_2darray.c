#include <stdio.h>

int main()
{
    int n, i, j, isSymmetric = 1, isUpperTriangular = 1, trace = 0;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if the matrix is symmetric
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                isSymmetric = 0;
                break;
            }
        }
        if (isSymmetric == 0)
        {
            break;
        }
    }

    if (isSymmetric == 1)
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    // Calculate the trace of the matrix
    for (i = 0; i < n; i++)
    {
        trace += matrix[i][i];
    }

    printf("The trace of the matrix is %d.\n", trace);

    // Check if the matrix is upper triangular
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (matrix[i][j] != 0)
            {
                isUpperTriangular = 0;
                break;
            }
        }
        if (isUpperTriangular == 0)
        {
            break;
        }
    }

    if (isUpperTriangular == 1)
    {
        printf("The matrix is upper triangular.\n");
    }
    else
    {
        printf("The matrix is not upper triangular.\n");
    }

    return 0;
}
