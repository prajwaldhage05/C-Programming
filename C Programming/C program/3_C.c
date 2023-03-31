#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5;
    int sum;
    float p;
    printf("Enter marks of 5 subjects(Out of 100): ");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    sum = m1 + m2 + m3 + m4 + m5;
    p = (sum/5.0f);
    printf("Total Marks: %d",sum);
    printf("Percentage: %f",p);
}