#include<stdio.h>
#include<stdlib.h>

int factorial(int);

int main()
{
	int number,a;
	printf("Enter Number whose factorial you want : ");
	scanf("%d",&number);
	a = factorial(number);
	if(a)
		printf("%d! is %d\n",number,a);
	
}

int factorial(int number)
{
	int output = 1;
	if(number>=0)
	{
		for(int i = 1;i<=number;i++)
		{
			output *= i;
		}
		if(output == 0 || output<0)
		{
			printf("Overflow has occured, enter a smaller number\n");
			main();
			return(0);
		}
		else
			return(output);
	}
	else
	{
		printf("Enter a positive Number\n");
		main();
		return(0);
	}
}
