#include<stdio.h>
#define N 10
void main()
{
    int n,i,temp,a[N],count=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp =n;

    while(temp!=0)
    {
    a[count++] =temp%2;
    temp = temp/2;
    }
    count--;
    for(i = count;i>=0;i--)
    {
        printf("%d",a[i]);
    }

}