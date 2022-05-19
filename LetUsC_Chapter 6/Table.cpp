#include<stdio.h>
#include<stdlib.h>

int main()
{
	int number;
	printf("Enter a number ");
	scanf("%d",&number);
	for(int i =1;i<=10;i++)
	{
		printf("\n%d * %d = %d",number,i,number*i);
	}
}

