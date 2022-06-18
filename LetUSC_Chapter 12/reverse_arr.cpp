#include<stdio.h>
#include<stdlib.h>
#include "../my_functions.h"

int main()
{
	const int SIZE = 8;
	int arr1[SIZE], arr2[SIZE];
	int_array_generator(arr1,SIZE, 3);
	print_array(arr1,SIZE);
	for(int i = 0; i<SIZE; i++)
	{
		*(arr2+SIZE-i-1) = *(arr1+i);
	}
	print_array(arr2,SIZE);
}

