#include<stdio.h>
void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("Factors: ");
    for(int i =1;i<=num;i++)
    {
        if(num%i==0)
        printf("%d ",i);
    }
}