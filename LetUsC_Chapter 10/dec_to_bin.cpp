#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int reverse(int number);
int dec_to_bin(int);

int main()
{
	int number;
	printf("enter number : ");
	scanf("%d",&number);
//	printf("%d",reverse(number));
	printf("%d",dec_to_bin(number));
	
}

int dec_to_bin(int number)
{
	int bin = 0 ,temp,d;
	temp = number;
	for(int i = 0;number>=1;++i)
	{
		d = number%2;
		bin += d*pow(10,i);
		number /= 2;
	}
	return bin;
}

int reverse(int number)
{
	int d,i =0, reverse = 0,temp;
	temp = number;
	for(;;)
	{
		temp /= 10;
		if(temp == 0)
			break;
		i++;
	}
	
	for(int j = i; j>=0;--j)
	{
		d = number%10;
		reverse += d*(pow(10,j));
		number = number/10;
	}
	return reverse;
}
