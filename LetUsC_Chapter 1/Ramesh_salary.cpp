#include<stdio.h>
#include<stdlib.h>

int main()
{
	float basic_salary, dearness_allowance, rent_allowance, total_salary;
	
	printf("Enter Basic Salary = ");
	scanf("%f",&basic_salary);
	dearness_allowance = 0.4*basic_salary;
	rent_allowance = 0.2*basic_salary;
	total_salary = basic_salary+dearness_allowance+rent_allowance;
	printf("Rameshs total salary is Rs. %f",total_salary);
	
}

