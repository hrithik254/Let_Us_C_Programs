#include<stdio.h>
#include<stdlib.h>
int function(int,int,int,int,int,int*,int*);

int main()
{
	int a,b,c,d,e,sum,*mean,*std_d;
	printf("Enter integer ");
	scanf("%d",&a);
	printf("Enter integer ");
	scanf("%d",&b);
	printf("Enter integer ");
	scanf("%d",&c);
	printf("Enter integer ");
	scanf("%d",&d);
	printf("Enter integer ");
	scanf("%d",&e);
	sum = function(a,b,c,d,e,mean,std_d);
	printf("%d  %d  %d",sum,*mean,*std_d);
	
}

int function(int a,int b,int c,int d,int e,int *mean, int *std_d)
{
	int sum = a+b+c+d+e;
	*mean = sum/5;
	*std_d = 0;
	return(sum);
}

