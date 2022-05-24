#include<stdio.h>
#include<stdlib.h>
void prime_factors(int number);
int is_prime(int);
int prime_generator(int);

int prime = 0;
int main()
{
	int number;
	printf("Enter Number ");
	scanf("%d",&number);
	printf("prime factors are : ");
	prime_factors(number);
}

void prime_factors(int number)
{
	while(prime_generator(number))
	{
		prime = prime_generator(number);
		if(number%prime == 0)
		{
			printf("%d, ",prime);
			number /= prime;
//			printf("\n%d",number);
		}
		if(number == 1)
			break;
	}
	prime = 0;
}

int prime_generator(int number)
{
	//generates the nest prime everytime the function is called, prime is declared as global variable 
	// which is used by this function to keep track of the previous prime
	for(int i = (prime + 1);i<=number;++i)
	{
		if(is_prime(i))
		{
	        return(i);
	        break;
		}
		else
			continue;
	}
	return(0);
}

int is_prime(int number)
{
//	returns number if its prime otherwise returns 0

	if(number < 0 || number == 0|| number ==1)
	{
//		return(0);
		exit(0);
	}
	else
	{
		for(int i = 2;i<=number/2;i++)
		{
			if(number%i == 0)
			{
				return(0);
			}
			else
				return(number);
		}	
	}
	
}
