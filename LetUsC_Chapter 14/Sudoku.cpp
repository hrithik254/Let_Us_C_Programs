#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int col_chekr(int *first_el);
int main()
{
	int sudoku[9][9]= {
							{5,3,4,6,7,8,9,1,2},
							{6,7,2,1,9,5,3,4,8},
							{1,9,8,3,4,2,5,6,7},
							{8,5,9,7,6,1,4,2,3},
							{4,2,6,8,5,3,7,9,1},
							{7,1,3,9,2,4,8,5,6},
							{9,6,1,5,3,7,2,8,4},
							{2,8,7,4,1,9,6,3,5},
							{3,4,5,2,8,6,1,7,9}
						};
	
	col_chekr(*sudoku);
}

int col_chekr(int *first_el)
{
	printf("Checking for Columns.... ");
	for(register int i = 0;i<9;i++)
	{
		int array[9];
		int_array_generator_sudoku(array,9,1);
		printf("\nColumn %d\n",i+1);
		for(register int k = 0;k<9;k++)
		{
			printf("\n%d  %d  ",array[*(first_el+k*9)-1],*(first_el+k*9)); // for debugging
			if(array[*(first_el+k*9)-1] == -1)
			{
				return 0;
			}
			else
			{
				if(array[*(first_el+k*9)-1] == *(first_el+k*9))
					array[*(first_el+k*9)-1] = -1;
			} 
		}
		first_el++;
	}
}

int row_checker(int *first_el, int rows)
{
	printf("Checking for rows")
	for(register int i =0;i<rows;i++)
	{
		int array[9];
		int_array_generator_sudoku(array,9,1);
		printf("\nRow %d\n",i+1);
		for(register int k=0;k<rows;k++)
		{
			if()
		}
	}
}


