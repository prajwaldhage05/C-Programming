#include<stdio.h>
#define ROW 3
#define COL 3
void main()
{
    int a[ROW][COL],i,j,Trow,Tcol;
    printf("Enter Matrix elements: ");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix: \n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<ROW;i++)
    {
        Trow = 0;
        Tcol = 0;
        for(j=0;j<COL;j++)
        {
            Trow = Trow + a[i][j];
            Tcol = Tcol + a[j][i];
        }
        printf("\nRow %d: %d",i+1,Trow);
        printf("\n");
        printf("Col %d: %d",i+1,Tcol);
        printf("\n");
    }

} 