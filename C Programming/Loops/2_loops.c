#include<stdio.h>
void main()
{
    int x,n,p=1;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&n);
    for(int i=0;i<n;i++)
    {
        p = p*x;
    }
    printf("X^n : %d",p);
}