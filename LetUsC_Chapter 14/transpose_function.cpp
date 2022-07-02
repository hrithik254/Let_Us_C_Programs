#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"
#define SIZE  4

int main()
{
	int mat[4][4];
	for(register int i =0;i<4;i++)
	{
		for(register int j = 0;j<4;j++)
		{
			mat[i][j] = i*j+(j-i);
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	transpose(*mat,SIZE);
	print_array(*mat,SIZE,SIZE);
}
	




