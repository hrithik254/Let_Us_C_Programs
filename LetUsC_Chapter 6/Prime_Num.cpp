#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 2, j=0;
	while(i<= 300)
	{
		j = i;
		for(;j<=i;j++)
		{
			if(i%j == 0)
				break;
			else 
				printf("%d",i);
				continue;
		}
		i += 1;
	}
}

