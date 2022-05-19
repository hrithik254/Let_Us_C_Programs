#include<stdio.h>
#include<stdlib.h>
#include <limits.h> 

int main()
{
	int input;
	while(1)
	{
		int output = 1,choice = 4;
		printf("\nChoose the function : ");
		printf("\nEnter 1 for factorial : ");
		printf("\nEnter 2 for Prime Check : ");
		printf("\nEnter 3 for Even/Odd Check : ");
		printf("\nEnter 4 to Exit : \n");
		scanf("%d",&choice);
		if(choice == 4)
			exit(1);
		printf("\nEnter the Number : ");
		scanf("%d",&input);
		
		switch(choice)
		{
			case 1:
				for(int i = 1;i<=input;i++)
				{
					output *= i;
				}
				if(output==0)
					{
						printf("Integer Overflow has occured");
						break;
					}
				else
				{
					printf("Factorial of %d is %d",input,output);
					break;
				}
			
			case 2:
				for(int i = 2;i<=(input/2)+1;i++)
				{
					if(input%i == 0)
					{
						printf("%d is Not prime",input);
						break;
					}
					else
					{
						printf("%d is prime",input);
						break;
					}
				}
				break;
			
			case 3:
				if(input%2 == 0)
					printf("%d is Even",input);
				else
					printf("%d is Odd",input);
				break;
				
			default:
				printf("Error Has occured");
				
		}
		
	}
}

