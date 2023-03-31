#include <stdio.h>

int main()
{
    int m, n, p, q, i, j, k;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &p, &q);

    if (n != p)
    {
        printf("Error: The matrices cannot be multiplied.\n");
        return 0;
    }

    int A[m][n], B[p][q], C[m][q];

    printf("Enter the elements of first matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of second matrix:\n");
    for (i = 0; i < p; i++)
    {
        for (j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    // Addition of two matrices
    if (m == p && n == q)
    {
        printf("Addition of two matrices:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error: The matrices cannot be added.\n");
    }

    // Multiplication of two matrices
    if (n == p)
    {
        printf("Multiplication of two matrices:\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
                printf("%d ", C[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Error: The matrices cannot be multiplied.\n");
    }

    return 0;
}
