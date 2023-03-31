#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && a<c)
    {
       printf("%d is minimum",a);   
    }
    else if(b<a && b<c)
    {
       printf("%d is minimum",b);   
    }
    else 
    {
       printf("%d is minimum",c);   
    }

    if(a>b && a>c)
    {
       printf("%d is maximum",a);   
    }

    else if(b>a && b>c)
    {
       printf("%d is maximum",b);   
    }

    else
    {
       printf("%d is maximum",c);   
    }
}