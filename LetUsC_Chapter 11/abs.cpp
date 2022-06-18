#include<stdio.h>
#include<stdlib.h>
#include "math.h"
# define aob(num) \
	printf("absolute value is %d",abs(num));\
		
int main()
{
	int number;
	printf("enter number : ");
	scanf("%d",&number);
	aob(number);
}

