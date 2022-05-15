#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,d,e,sum,number, reverse;
	printf("enter 5 digit number = ");
	scanf("%d",&number);
	a = number%10;
	b = ((number%100)-a)/10;
	c = ((number%1000)-b)/100;
	d = ((number%10000)-c)/1000;
	e = ((number%100000)-d)/10000;
	reverse = e+10*d+100*c+1000*b+10000*a;
	printf("reverse number is %d ",reverse);
}

