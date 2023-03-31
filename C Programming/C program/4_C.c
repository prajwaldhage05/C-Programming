#include<stdio.h>
void main()
{
    double basic_salary,pf,tax,hra,da,net_salary;
    printf("Enter the Basic Salary: ");
    scanf("%lf",&basic_salary);
    pf = 0.02*basic_salary;
    tax = 0.03*basic_salary;
    hra = 0.05*basic_salary;
    da = 0.08*basic_salary;

    net_salary = basic_salary + hra + da - tax - pf;

    printf("Net Salary: %lf",net_salary);

}