#include<stdio.h>
#include<stdlib.h>
#include "../my_functions.h"
void sieve(int* array,int SIZE);
int main()
{
	const int SIZE = 101;
	int array[SIZE];
	int_array_generator(array,SIZE,1);
	print_array(array, SIZE);
	sieve(array,SIZE);
	print_array(array, SIZE);
	
	

}

void sieve(int* array,int SIZE)
{
	static int divisor = 2;
	for(int t = divisor; t<SIZE;t++)
	{
		for(int k = divisor;k < SIZE; k+= divisor)
		{
			if(array[k]!= 0 && array[k] != divisor)
			{
				if(array[k]%divisor == 0)
				{
					array[k] = 0;
				}
			}
		}
		divisor++;	
	}
	
}
