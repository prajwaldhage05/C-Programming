#include<stdio.h>
#define N 100
void main()
{
    int a[N],n,i,temp =0,j;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter array element: ");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j = i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

    }
    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",i[a]);
    }
}