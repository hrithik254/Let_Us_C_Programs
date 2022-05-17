#include<stdio.h>
#include<stdlib.h>

int main()
{
	int hours_worked,i = 0,overtime, overtime_pay;
	while(++i <=3)
	{
		printf("\nEnter total number of Hours Worked : ");
		scanf("%d",&hours_worked);
		overtime = hours_worked-40;
		if(overtime > 0)
		{
			overtime_pay = 12*overtime;
		}
		else
		overtime_pay = 0;
		printf("\n Overtime Pay of Employee %d is Rs. %d\n",i,overtime_pay);
	}
	return 0;
}

