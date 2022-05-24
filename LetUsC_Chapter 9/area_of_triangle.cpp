#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void area_tri(float,float,float,float*);

int main()
{
	float a,b,c,area;
	
	printf("Enter length of side one : ");
	scanf("%f",&a);
	printf("Enter length of side one : ");
	scanf("%f",&b);
	printf("Enter length of side one : ");
	scanf("%f",&c);
	area_tri(a,b,c,&area);
	printf("Area of triangle is : %.2f",area);
	
}

void area_tri(float a, float b,float c, float *area)
{
	float s;
	s = (a+b+c)/2;
//	printf("%f",s);
	*area = sqrt(s*(s-a)*(s-b)*(s-c));
	
}
