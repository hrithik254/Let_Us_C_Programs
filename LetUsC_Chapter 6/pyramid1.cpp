#include<stdio.h>
#include<stdlib.h>

int main()
{
	int count = 1;
	for(int i = 1;i<=4;i++)
	{
		for(int c =1;c<=4-i;c++)
		{
			printf("  ");
		}
		for(int k = 1;k<=i;k++)
		{
			printf("%d  ",count);
			count++;
		}
		printf("\n");
	}
}

