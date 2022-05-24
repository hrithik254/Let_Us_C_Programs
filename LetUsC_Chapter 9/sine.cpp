#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void sine(float,float*);
int factorial(int number);
int main()
{
	float *sum , x;
	
	printf("Enter theta value(radians) : ");
	scanf("%f",&x);
	sine(x,sum);
	printf("Sine of %.2f is %.2f",x,*sum);
	
}

void sine(float x,float *sum)
{
	*sum = 0;
	for(int i=1;i<=10;)
	{
		*sum += (pow(x,2*i-1)/factorial(2*i-1))*(pow(-1,i+1));
		i += 1;
		printf("%f\n",*sum);
	}
}

int factorial(int number)
{
	int output = 1;
		for(int i = 1;i<=number;i++)
		{
			output *= i;
		}
		return output;
		
}
