#include<stdio.h>
#define m 3 
#define n 2
void main()
{
    int a[m][n], b[n][m],i,j;
    printf("Enter Matrix A:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[j][i] = a[i][j];
        }
    }
    printf("Matrix A: ");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }
    
    
}