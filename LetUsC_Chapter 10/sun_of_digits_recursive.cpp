#include<stdio.h>
#include<stdlib.h>

int digits(int);

int main()
{
	int number, sum;
	printf("Enter any integer number : ");
	scanf("%d",&number);
	sum = digits(number);
	printf("sum of digits is : %d",sum);
}


int digits(int number)
{
	int sum;
	if(number == 0)
		return 0;
	
	sum = number%10 + digits(number/10);
	return sum;
}
