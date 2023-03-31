#include<stdio.h>
void main()
{
    float f,c,k;
    printf("Enter Temperature in Farenheit: ");
    scanf("%f",&f);
    c = (5/9.0f)*(f-32);
    k = c + 273.15f;
    printf("In Celcius: %f",c);
    printf("In Kelvin: %f",k);

}