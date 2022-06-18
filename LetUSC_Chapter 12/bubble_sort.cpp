#include<stdio.h>
#include<stdlib.h>
void swap(int*,int*);

void print_array(int *,int);

int main()
{
	const int MAX = 20;
	int number_array[MAX] = {10,12,89,45,74,63,80,40,50,12,79,46,43,1,5,4,6,9,8,7};
	print_array(number_array,MAX);
	
	for(int i = 0;i<MAX;i++)
	{
		for(int j = 0;j<MAX-1;j++)
		{
			if(number_array[j]>number_array[j+1])
			{
				swap((number_array+j),(number_array+j+1));
			}
		}
	}
	print_array(number_array,MAX);
	
}



void swap(int *num1, int *num2)
{
	int * temp;
	*temp = *num1;
	*num1 = *num2;
	*num2 = *temp;
}

void print_array(int *array,int size)
{
	for(int i = 0; i< size;i++)
	{
		printf(" %d",*(array+i));
	}
	printf("\n");
}
