#include<stdio.h>
#include<stdlib.h>
#include "area_peri.h"
int main()
{
	float side, radius;
	printf("enter square side : ");
	scanf("%f",&side);
	SQR_PA(side);
	printf("\nenter radius ");
	scanf("%f",&radius);
	CR_PA(radius);
}

