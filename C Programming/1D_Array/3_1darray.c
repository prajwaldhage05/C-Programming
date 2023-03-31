#include<stdio.h>
#define N 100
void main()
{
    int a[N],num,n,count=0,i;
    printf("Enter numer of elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number : ");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(num==i[a])
        {
            count++;
        }
    }
    printf("Occurance: %d",count);
}