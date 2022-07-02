#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	int mat[5][5];
	for(register int i =0;i<5;i++)
	{
		for(register int j = 0;j<5;j++)
		{
			mat[i][j] = rand();
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	int max = 0;
	for(register int i =0;i<5;i++)
	{
		for(register int j = 0;j<5;j++)
		{
			if(mat[i][j] >= max)
				max = mat[i][j];
		}
	}
	printf("maximum is %d ",max);
}

