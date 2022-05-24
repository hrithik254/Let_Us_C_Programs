#include<stdio.h>
#include<stdlib.h>

int circular_shift(int*,int*,int*);

int main()
{
	int a, b, c;
	
	printf("enter number 1 : ");
	scanf("%d",&a);
	
	printf("enter number 2 : ");
	scanf("%d",&b);
	
	printf("enter number 3 : ");
	scanf("%d",&c);
		
	for(int i =1;i<=10;++i)
	{
		printf("\n %d) %d%d%d",i,a,b,c);
		circular_shift(&a,&b,&c);
	}
	return 0;
	
}

int circular_shift(int *a, int *b, int *c)
{
	int * temp;
	*temp = *a;
	*a = *b;
	*b = *c;
	*c = *temp;
	return 0;
}

