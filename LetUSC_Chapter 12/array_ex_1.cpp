#include<stdio.h>
#include<stdlib.h>
int search(int*,int,int);
int main()
{
	const int strength = 5;
	int search_query, instances;
	int marks[strength];
	for(int i = 0;i<5;i++)
	{
		printf("Enter marks of %d th student: ",i+1);
		scanf("%d",marks+i);
	}
	printf("\nEnter number to be searched ");
	scanf("%d",&search_query);
	instances = search(marks, search_query,strength);
	printf("%d appears %d times in array",search_query,instances);
}

int search(int *array, int search, int size)
{
	int count = 0;
	for(int i = 0; i<size;i++)
	{
		if(array[i] == search)
		{
			count++;
		}
	}
	return count;
}
