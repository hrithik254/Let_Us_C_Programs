#include<stdio.h>
#include<stdlib.h>

int main()
{
	const int machine_cost = 6000;
	const int resale_value = 2000;
	int life = 0,machine_return,counter = 1;
	float investment_return = 0 , interest_factor = 1 ;
	
	
	machine_return = -machine_cost + resale_value;
//	printf("%d is machine return\n\n",machine_return);
	
	while(machine_return<=investment_return)
	{
		life = life+1;
		machine_return += 1000;
		interest_factor *= (1+(0.09));
		investment_return = machine_cost*interest_factor;
//		printf("%d is the return by machine and %f is return from investment\n",machine_return,investment_return);
		counter += 1;
		if(counter>200)
		{
			printf("Machine is not profitable even after 200 years");
			break;
		}
	}
	if(counter>200)
	{
		return 0;
	}
	else 
	printf("Machine would be more profitable investment in %d years ",life);
}

