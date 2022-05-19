#include<stdio.h>
#include<stdlib.h>
int pow(int, int);

int main()
{
	int base =1 , power = 1, output =1;
	printf("Enter base : ");
	scanf("%d",&base);
	printf("Enter Power : ");
	scanf("%d",&power);
	output = pow(base,power);
	if(output)
		printf("%d raised to the power %d is : %d\n",base,power,output);
}

int pow(int base, int power)
{
	int output = 1;
	if(power >=0 && base >=0)
	{
		for(int i =1;i<=power;i++)
		{
			output *= base;
		}
		if(base > 0 && output <= 0)
		{
			printf("Overflow has occured\n");
			main();
		}
		else
			return(output);
	}
	else
	{
		printf("One of the arguments is incorrect\nPlease enter correct values\n");
		main();
		return(0);
	}
}
