#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year = 0;
	printf("Enter year ");
	scanf("%d",&year);
	if (year%4 == 0)
	printf("Year entered is a leap year");
	else
	printf("Year entered is not leap year");
	return 0;
}

