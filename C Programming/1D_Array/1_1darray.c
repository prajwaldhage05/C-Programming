#include<stdio.h>
#define N 100
void main()
{
    int a[N],n,l,s,i;
    printf("Enter number of Elements: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    l = a[0];
    s = a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l = a[i]; 
        }
        if(a[i]<s)
        {
            s = a[i];
        }
    }
    printf("Largest: %d",l);
    printf("Smallest: %d",s);

    printf("Range: %d",l-s);

}