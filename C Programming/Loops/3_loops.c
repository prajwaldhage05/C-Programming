#include<stdio.h>
void main()
{
    int n;
    char c;
    printf("Enter Character: ");
    scanf("%c",&c);
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("\n%c",c+i);
    }
}