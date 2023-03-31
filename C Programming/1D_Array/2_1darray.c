#include<stdio.h>
#define N 100
void main()
{
    int a[N],i,key,n,f = 0;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter array elements: ");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter key: ");
    scanf("%d",&key);

    for(i = 0;i<n;i++)
    {
        if(key == a[i])
        {
            f = 1;      
        }

    }
    if(f == 1)
    {
        printf("Key is present");
    }
    else
    {
        printf("Key is not present");
    }

}