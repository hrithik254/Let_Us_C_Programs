#include<stdio.h>
#include<stdlib.h>

void run_sum(int);
int sum(int);

int main()
{
	int number;
	printf("enter number : ");
	scanf("%d",&number);
	run_sum(number);
}

void run_sum(int number)
{
	if(number >= 0)
	{
//		printf("\n%d",sum(number));
		run_sum(number-1);
		printf("\n%d",sum(number));
//		try commenting 21 and uncommenting 19
	}
	
}

int sum(int number)
{
	if(number ==0)
		return 0;
		
	return number + sum(number-1);
}
