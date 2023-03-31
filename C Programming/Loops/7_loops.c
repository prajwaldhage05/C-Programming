#include<stdio.h>
#include<stdlib.h>
void main()
{
    int r,l,b,base,h,i,ch;
    do
    {
        printf("Menu:\n1. Area of Circle\n2. Area of Rectangle\n3. Area of Triangle\n 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter radius: ");
            scanf("%d",&r);
            printf("Area of Circle: %f",3.14f*r*r);
            break;
        
        case 2:
            printf("Enter length and breadth: ");
            scanf("%d%d",&l,&b);
            printf("Area of Rectangle: %d",(l*b));
            break;
        case 3:
            printf("Enter base and height: ");
            scanf("%d%d",&base,&h);
            printf("Area of Triangle: %f",0.5f*base*h);
            break;
        case 4:
            exit(0);
        default:
            break;
        }
        printf("\nDo you want to continue: (1:Yes,0:No)");
        scanf("%d",&i);
    } while (i!=0);
    
}