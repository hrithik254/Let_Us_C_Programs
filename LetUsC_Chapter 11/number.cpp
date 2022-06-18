#include<stdio.h>
#include<stdlib.h>
# define BIGGER(x,y) \
		 if(x>y)\
		 	printf("first num is bigger");\
		else\
			printf("second numbber is bigger");
int main()
{
	int num1,num2;
	printf("enter number 1 : ");
	scanf("%d",&num1);
	printf("enter number 2 : ");
	scanf("%d",&num2);
	BIGGER(num1,num2);
}

