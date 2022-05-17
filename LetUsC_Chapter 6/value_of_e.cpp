#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,j;
	float factorial = 1,sum = 0;
	for(i = 1;i<=13;i++)
	{
		factorial = 1;
		for(j =1;j<=i;j++)
		{
			factorial = factorial*j;
		}
		sum += i/factorial;
	}
	printf("\n%f",sum);
}

