#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"
void checker(int*,int);

int main()
{
	int const SIZE = 15;
	int array[SIZE];
	int_array_generator(array,SIZE,0);
	print_array(array,SIZE);
	checker(array,SIZE);
	
}

void checker(int * array, int SIZE)
{
	static int index;
	if(*(array + index) == *(array + SIZE-index -1))
	{
		printf("%d   %d ",*(array + index),*(array + SIZE-index -1));
		++index;
		checker(array+index,SIZE);
	}
	else
	{
		printf("array does not satisfy criteria");
	}
	
}

