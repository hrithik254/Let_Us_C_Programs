#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number, sum;
	printf("Enter 5 digit number");
	scanf("%d",&number);
	for(int i = 1;i<=5;++i)
	{
		sum += number%10;
		number = number/10;
	}
	printf("sum of digits is : %d",sum);
}

