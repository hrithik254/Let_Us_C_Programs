#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number,a,b,c,d,e,sum;
	printf("5 digit input = ");
	scanf("%d",&number);
	a = number%10;
	b = ((number%100)-a)/10;
	c = ((number%1000)-b)/100;
	d = ((number%10000)-c)/1000;
	e = ((number%100000)-d)/10000;
	sum = a+b+c+d+e;
	printf("sum of digits = %d",sum);
	return 0;
}

