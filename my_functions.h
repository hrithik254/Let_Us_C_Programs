void swap(int*a,int*b);

void int_array_generator(int *array, int SIZE, int step)
/*
	params 
		size = size of the desired array
		step = step between integers of array 
	return 
		pointer to array
*/
{
	for(int i = 0;i<SIZE;i++)
	{
		array[i] = i*step;
	}
}

void int_array_generator_sudoku(int *array, int SIZE, int step)
/*
	params 
		size = size of the desired array
		step = step between integers of array 
	return 
		pointer to array
*/
{
	for(int i = 0;i<SIZE;i++)
	{
		array[i] = i*step +1;
	}
}


void print_array(int *array,int row, int column)
/*
	params
		int *array = pointer to first integer element of 2D array
		int row = no. of row in 2D array
		int columnn = no. of column in 2D array
*/
{
	if(row > 0 && column >0 )
	{
		for(register int i =0;i<row;i++)
		{
			for(register int j = 0;j<column;j++)
			{
				printf("%d  ",*(array + column*i+j));
			}
			printf("\n");
		}
	}
	printf("\n");
}

void transpose(int* first_element, int size)
/*
	params
		int*p = pointer to the first element of 2D array
		size = size of 2d square matrix 
*/
{
	for(register int row =0;row<size;row++)
	{
		for(register int col = 0;col<size;col++)
		{
			if(row>col)
			{
				swap((first_element+row*size+col),(first_element+col*size+row));
			}
		}
	}
}

void matrix_maker(int * first_element,int row, int col)

{
	for(register int i =0;i<row;i++)
	{
		for(register int j = 0;j<col;j++)
		{
			*(first_element + i*row+j) = i*j+(j-i);
		}
	}
}

void swap(int*a,int*b)
{
	int * temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}

void lcir_shft(int * arr, int size, int shift )
/*
	params
		arr = pointer to first element of integer array
		size = size of array
		shift = amount of shift
	description:
		circularly shifts the array elements to the left by {shift}
*/
{
	for(register int j = 0;j<shift;j++)
	{
		const int temp = *arr;
		for(register int i = 1;i<size;i++)
		{
			arr[i-1] = arr[i];
		}
		arr[size-1] = temp;
	}
}
