#include<stdio.h>

int power(int x, int y) {
    if (y == 0) {
        return 1;
    } else if (y % 2 == 0) {
        int temp = power(x, y/2);
        return temp * temp;
    } else {
        int temp = power(x, y/2);
        return x * temp * temp;
    }
}
void main()
{
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d%d",&x,&y);

    printf("%d to the power %d is %d",x,y,power(x,y));
}