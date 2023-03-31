#include<stdio.h>
void main()
{
    int r,ch;
    printf("Enter radius of Circle: ");
    scanf("%d",&r);
    printf("Menu:\n1. Area of Circle\n2. Circumference of Circle\n3. Volume of Sphere");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Area of Cirlce: %f",3.14*r*r);
        break;
    case 2: 
        printf("Circumference of Circle: %f",2*3.14*r);
        break;
    case 3: 
        printf("Volume of Sphere: %f", (4/3)*3.14*r*r*r);
        break;
    default:
        printf("Wrong choice");
        break;
    }
}