#include<stdio.h>
void main()
{
    int nr1,dr1,nr2,dr2,ch,nr,dr;
    printf("Enter 1st Fraction Nr and Dr: ");
    scanf("%d%d",&nr1,&dr1);
    printf("\nEnter 2nd Fraction Nr and Dr: ");
    scanf("%d%d",&nr2,&dr2);
    printf("\nMenu:\n1. Add\n2. Substract\n3. Multiply");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        if(dr1==dr2)
        {
            nr = nr1+nr2;
            dr = dr1;
        }
        else
        {
            nr = nr1*dr2 + nr2*dr1;
            dr = dr1*dr2;
        }
        break;
    case 2:
        if(dr1 == dr2)
        {
            nr = nr1-nr2;
            dr = dr1;
        }
        else
        {
            nr = nr1*dr2 - nr2*dr1;
            dr = dr1*dr2;
        }
        break;
    case 3:
        nr = nr1*nr2;
        dr = dr1*dr2;
        break;
    
    default:
        printf("Wrong Input");
    }
   printf("Numerator: %d",nr);
   printf("\nDenominator: %d",dr);
}