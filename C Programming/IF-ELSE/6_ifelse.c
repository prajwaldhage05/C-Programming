#include<stdio.h>
void main()
{
    char c;
    printf("Enter the character: ");
    scanf("%c",&c);
    if(c >= 'A' && c<='Z')
    {
        printf("Uppercase");
    }
    else if(c>='a' && c<='z')
    {
        printf("Lowercase");
    }
    else
    {
        printf("Wrong character");
    }
}