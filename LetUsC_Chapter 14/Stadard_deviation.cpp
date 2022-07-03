#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"../my_functions.h"

int main()
{
	int rdta[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
	float mean = 0;
	for(register int i = 0;i<15;i++)
	{
		mean += i[rdta];
	}
	mean /= 15;
	float sd;
	for(register int i = 0;i<15;i++)
	{
		sd += pow(rdta[i]-mean,2);
	}
	sd = sqrt((sd/15));
	
	printf("SD = %f Mean = %f",sd,mean);
}

