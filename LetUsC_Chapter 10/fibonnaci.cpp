#include<stdio.h>
#include<stdlib.h>

int fibo(int);

int main()
{
	int digits;
	printf("Enter number of terms you want of fibo seq : ");
	scanf("%d",&digits);
	fibo(digits);
	
}

int fibo(int number)
{
	int sum;
	if(number <= 1)
		return number;
	sum = fibo(number-1) + fibo(number-2);
	return sum; 
}               
