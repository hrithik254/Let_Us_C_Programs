#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number, i = 1;
	printf("Enter the number = ");
	scanf("%d",&number);
	while(number>0)
	{
		printf("%d",number);
		i *= number;
		number -= 1; 
	}
	printf("factorial of number is %d",i);
}

