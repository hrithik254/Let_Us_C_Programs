#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

void lcir_shft(int * arr, int size, int shift );

int main()
{
	int size = 5;
	int shift = 2;
	int arr[]={1,2,3,4,5};
	lcir_shft(arr,size,3);
	print_array(arr,1,5);
	
}


void lcir_shft(int * arr, int size, int shift )
{
	for(register int j = 0;j<shift;j++)
	{
		int temp = 0;
		temp = *arr;
		for(register int i = 1;i<size;i++)
		{
			*(arr+i-1) = *(arr+i);
		}
		*(arr +size-1) = temp;
	}
}

