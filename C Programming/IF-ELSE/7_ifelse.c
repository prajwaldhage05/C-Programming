#include<stdio.h>
#include<stdlib.h>
// #include<ctype.h>
void main()
{
    char c;
    printf("Enter a character: ");
    c = getchar();
    // if(islower(c))
    // {
    //     putchar(toupper(c));
    // }
    // else if(isupper(c))
    // {
    //     putchar(tolower(c));
    // }
    // else
    // {
    //     printf("Wrong character");
    // }
    if(c >='A' && c<='Z')
    {
        c = c+32;
    }
    else if(c>='a' && c<='z')
    {
        c = c-32;
    }
    else
    {
        printf("Wrong character");
        exit(1);
    }
    printf("%c",c);
}