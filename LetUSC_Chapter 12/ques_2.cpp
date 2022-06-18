#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"
void checker(int*,int);

int main()
{
//	int const SIZE = 15;
//	int array[SIZE];
//	int_array_generator(array,SIZE,0);
	int array[] = {1,2,3,4,5,4,3,2,1};
	const int SIZE = 9;
	print_array(array,SIZE);
	checker(array,SIZE);
	
}


void checker(int * array, int SIZE)
{
	for(int i = 0; i<SIZE/2;i++)
	{
		if(array[i] == array[SIZE-i-1])
			continue;
		else
		{
			printf("Array does not satisfy the criteria");
			break;
		}
	}
	printf("Criteria satisfied");
}
