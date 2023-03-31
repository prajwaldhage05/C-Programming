#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    // temp = a;
    // a =b;
    // b = temp;

    a = a+b;
    b = a-b;
    a = a-b;
    printf("After Swap: %d %d",a,b);


}