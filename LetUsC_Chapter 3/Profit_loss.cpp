#include<stdio.h>
#include<stdlib.h>

int main()
{
	float cost_p = 0, sell_p = 0;
	printf("Enter the cost price = Rs. ");
	scanf("%f",&cost_p);
	printf("Enter Selling Price = Rs. ");
	scanf("%f",&sell_p);
	if(cost_p>sell_p)
	printf("Loss has occured !");
	if(cost_p==sell_p)
	printf("No profit No Loss");
	if(cost_p<sell_p)
	printf("Enjoy the profit !");
}

