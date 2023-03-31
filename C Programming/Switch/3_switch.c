#include<stdio.h>
void main()
{
    int x,y,c,r,temp;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);
    printf("Operations: \n1. Equality Check\n2. Less Than Check\n3. Quotient and Remainder\n4. Range\n5. Swap");
    printf("Enter your choice: ");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        if(x==y)
        {
            printf("X equals to Y");
        }
        else
        {
            printf("X not equals to Y");
        }
        break;
    
    case 2:
        if(x<y)
        {
            printf("X less than Y");
        }
        else
        {
            printf("X not less than Y");
        }
        break;
    case 3:
        printf("Quotient: %d",x/y);
        printf("Remainder: %d",x%y);
        break;
    case 4: 
        
        printf("Enter a number: ");
        scanf("%d",&r);
        if((r>=x && r<=y) || (r>=y && r<=x))
        {
            printf("%d is in range of X and Y",r);
        }
        else
        {
            printf("%d is not in range of X and Y",r);
        }
        break;
        
    case 5:
    temp = x;
    x = y;
    y = temp;
    printf("After Swap: %d  %d",x,y);
    break;

    default:
        printf("Wrong Input");
        break;
    }
}