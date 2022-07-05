#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"
#define SIZE 12

void in_r(char*,char ,char*);
void in_l(char*,char , char*);

int main()
{
	char arr[SIZE] = {0};
	char x;
	int y;
	char *left = arr + SIZE/2 -1, *right = left+1;
	printf("%u %u \n",left,right);
	printf("Enter 0 to quit\n");
	while(1)
	{
		printf("\nEnter Char : ");
		scanf("%c",&x);
		printf("Enter -1 to insert left, 1 to insert right : ");
		scanf("%d",&y);
		fflush ( stdin ) ;
		if(y == -1 || y == 1)
		{
			if(y == -1)
			{
				in_l(arr,x,left);
			}
			else if(y == 1)
			{
				in_r(arr,x,right);
			}
			else
				printf("Press -1 to quit, invalid input\n");
		}
		else if(x == 0)
			break;
		else
		{
			printf("\n Contents of Queue : ");
			for(register int k =0;k<SIZE;k++)
			{
				printf("%c, ",*(arr+k));
			}
			break;
		}
	}
	
}


void in_r(char*arr,char x,char *right)
{
	if((arr+SIZE-1) == right)
		printf("Array Full Right");
	else
	{
		*(right) = x;
		right = right+1;
		printf("\n%c is inserted at address %u",x,right);
	}
}

void in_l(char*arr,char x,char *left)
{
	if((arr) == left)
		printf("Array Full Left");
	else
	{
		*(left) = x;
		left =left+1;
		printf("\n%c is inserted at %u",x,left);
	}
}


