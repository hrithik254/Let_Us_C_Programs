#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"
#define SIZE 4
int main()
{
	int mat1[SIZE][SIZE];
	int mat2[SIZE][SIZE];
	int prod[SIZE][SIZE];
	
	matrix_maker(*mat1,SIZE,SIZE);
	print_array(*mat1,SIZE,SIZE);
	printf("\n\n\n");
	matrix_maker(*mat2,SIZE,SIZE);
	print_array(*mat2,SIZE,SIZE);
	
	int sum = 0;
	
	for(register int i = 0;i<SIZE;i++)
	{
		for(register int j = 0;j<SIZE;j++)
		{
			for(register int k=0;k<SIZE;k++)
			{
				sum += mat1[k][j]*mat2[i][k];
			}
			prod[i][j] = sum;
			sum = 0;
		}
	}
	
	print_array(*prod,SIZE,SIZE);
	
}

