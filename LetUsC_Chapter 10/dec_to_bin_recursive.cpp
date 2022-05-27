#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void dec_to_bin_r(int number);
int main()
{
	int bin =0;
	int number;
	printf("enter number : ");
	scanf("%d",&number);
	dec_to_bin_r(number);
}


void dec_to_bin_r(int number)
{
	int d = 0, bin = 0;
	if(number > 1)
		dec_to_bin_r(number/2);
		
	d = number%2;
	printf("%d",d); 
	
}
