#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	int mat[4][4];
	for(register int i =0;i<4;i++)
	{
		for(register int j = 0;j<4;j++)
		{
			mat[i][j] = i*j;
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(register int i =0;i<4;i++)
	{
		for(register int j = 0;j<4;j++)
		{
			if(i>j)
			{
				swap(&mat[i][j],&mat[j][i]);
			}
		}
	}
	
	print_array(*mat,4,4);
}

 


