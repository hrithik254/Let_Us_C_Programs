#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x = 0, sum = 0;
	printf("input the number you want to find log of : ");
	scanf("%f",&x);
	for(int i =1;i<=20;i++)
	{
		printf(" %d\n",i);
		
		sum += (1/i)*pow(((x-1)/i),i)*(pow(-1,i+1));
		
	}
	printf("Log of %f is %f",x,sum);
}

