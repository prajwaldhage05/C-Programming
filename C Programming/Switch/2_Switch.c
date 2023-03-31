#include<stdio.h>
void main()
{
    int a,b,result;
    char c;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    
    printf("Enter the Operator(+-*/): ");
    scanf("%c",&c);
    scanf("%c",&c);

    switch(c)
    {
    case '+':
        result = a+b;
        break;

    case '-':
        result = a-b;
        break;

    case '*': 
        result = a*b;
        break;

    case '/':
        result = a/b;
        break;
    }
    printf("Result: %d",result);
}