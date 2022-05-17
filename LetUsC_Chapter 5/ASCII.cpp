#include<stdio.h>
#include<stdlib.h>

int main()
{
	char character ;
	int counter = 0;
	printf("ASCII Value  Chracter          ASCII Value  Character\n");
	while(counter++ <= 128)
	{
		printf("\n%d       %c                 %d       %c\n\n",counter,counter,counter+128,counter+128);
	}
}

