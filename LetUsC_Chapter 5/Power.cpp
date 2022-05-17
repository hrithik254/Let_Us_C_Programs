#include<stdio.h>
#include<stdlib.h>

int main()
{
	int base,power,answer = 1,temp;
	printf("Enter the Base : ");
	scanf("%d",&base);
	printf("Enter the power : ");
	scanf("%d",&power);
	temp = power;
	while(temp-->0)
	{
		answer *= base;
	}
	printf("\n%d to the power of %d is %d",base,power,answer);
}

