#include<stdio.h>
#include<stdlib.h>
# define mean(num1,num2)\
	printf("\naverage is %d",(num1+num2)/2);
int main()
{
	int num1, num2, *result;
	printf("enter number : ");
	scanf("%d",&num1);
	printf("enter number : ");
	scanf("%d",&num2);
	mean(num1,num2);
}

