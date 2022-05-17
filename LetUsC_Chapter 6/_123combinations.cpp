#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 1,j = 1,k = 1;
	for(;i<=3;)
	{
		for(;j<=3;)
		{
			for(;k<=3;++k)
				printf("%d%d%d\n",i,j,k);
			j = j+1;
		}
		i = i+1;
	}
}

