#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	int k[4][5] = {
						{0,1,1,1,1},
						{2,1,1,1,1},
						{3,1,1,1,1},
						{4,1,1,1,1}
					};
	
	print_array(*k,4,5);
	for(register int i=0;i<4;i++)
	{
		lcir_shft(*k+5*i,5,2);
		
	}
	print_array(*k,4,5);
}
