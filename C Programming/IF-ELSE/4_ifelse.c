#include<stdio.h>
void main()
{
    char c;
    printf("Enter lowercase character: ");
    scanf("%c",&c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
}