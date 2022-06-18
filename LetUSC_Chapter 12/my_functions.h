
void int_array_generator(int * array,int SIZE, int step)
/*
	params 
		size = size of the desired array
		step = step between integers of array 
	return 
		pointer to array
*/
{
	int array[SIZE];
	for(int i = 0;i<SIZE;i++)
	{
		array[i] = i*step;
	}
}


void print_array(int *array,int size)
/*
	params
		array = address of array
		size = size of array
	Description = Prints array 
*/
{
	for(int i = 0; i< size;i++)
	{
		printf(" %d",array[i]);
	}
	printf("\n");
}
