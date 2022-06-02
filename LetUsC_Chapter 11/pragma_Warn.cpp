#include<stdio.h>
#include<stdlib.h>

# pragma warn -rvl

int is_prime(int number);

int main()
{
	int number,c;
	printf("enter number : ");
	scanf("%d",&number);
	c = is_prime(number);
}


int is_prime(int number)
{
//	returns number if its prime otherwise returns 0

	if(number < 0 || number == 0|| number ==1)
	{
//		return(0);
	}
	else
	{
		for(int i = 2;i<=number/2;i++)
		{
			if(number%i == 0)
			{
//				return(0);
			}
//			else
//				return(number);
		}	
	}
	
}
