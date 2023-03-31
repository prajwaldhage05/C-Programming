#include<stdio.h>
void main()
{
    int a,b,c,sum;
    printf("Enter the angles of Triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    sum = a+b+c;
    if(sum == 180)
    {
        printf("Triangle is valid");
    }
    else
    {
        printf("Triangle is not valid");
    }
}