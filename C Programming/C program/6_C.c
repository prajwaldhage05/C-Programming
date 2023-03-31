#include<stdio.h>
#define PI 3.14f
void main()
{
    int r , h;
    float surface_area, vol;
    printf("Enter the radius and Height: ");
    scanf("%d%d",&r,&h);
    surface_area = 2*PI*r*r + 2*PI*r*h;
    vol = PI *r*r*h;
    printf("Surface Area: %f",surface_area);
    printf("\nVolume: %f",vol);

}