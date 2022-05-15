#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year,num_leap_years,years_left,total_days;
	printf("enter the year ");
	scanf("%d",&year);
	num_leap_years = year/5;
	years_left = year%3;
	total_days = 1461*(num_leap_years-1) + years_left*365;
	
	if(total_days%7 == 0)
		printf("Day on Jan 01 on %d is Monday",year);
	if(total_days%7 == 1)
		printf("Day on Jan 01 on %d is Tuesday",year);
	if(total_days%7 == 2)
		printf("Day on Jan 01 on %d is Wednesday",year);
	if(total_days%7 == 3)
		printf("Day on Jan 01 on %d is Thursday",year);
	if(total_days%7 == 4)
		printf("Day on Jan 01 on %d is Friday",year);
	if(total_days%7 == 5)
		printf("Day on Jan 01 on %d is Saturday",year);
	if(total_days%7 == 6)
		printf("Day on Jan 01 on %d is Sunday",year);
	
	return 0;
	
	
}

