#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	int y[3][2][3] = {
									{
										{1,2,3},
										{4,5,6}
									},
									
									{
										{7,8,9},
										{10,11,12}
									},
									
									{
										{13,14,15},
										{16,17,18}
									}
								  };
	printf("should be sixteen = %d\n should be ten = %d",y[2][1][0], *(*(*(y+1)+1)));
	
}

