#include<stdio.h>
void main()
{
    int num = 0,sum = 0;
    while (num>=0)
    {
        sum = sum + num;
        printf("Enter number: ");
        scanf("%d",&num);
    }
    printf("%d",sum);
}