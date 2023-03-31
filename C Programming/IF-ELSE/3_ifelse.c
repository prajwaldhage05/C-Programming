#include<stdio.h>
void main()
{
    int abs;
    float tax;
    printf("Enter annual basic salary: ");
    scanf("%d",&abs);
    if(abs<150000)
    {
        tax = 0;
    }
    else if(abs<=300000)
    {
        tax = 0.2;
    }
    else
    {
        tax = 0.3;
    }
    tax = tax * abs;
    printf("Income tax: %f",tax);
}