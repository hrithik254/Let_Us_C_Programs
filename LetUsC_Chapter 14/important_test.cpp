#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	int x[4][4] = {
						{1,4,15,7},
						{8,10,2,11},
						{14,3,6,13},
						{12,9,5,0},
					};
	
//	int *(*)n= &x;
	printf("&x = %u,x = %u *x = %u, **x= %u\n",&x,x,*x,**x);
}

