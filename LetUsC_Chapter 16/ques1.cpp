#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../my_functions.h"

int main()
{
	char qury[20];
	char str[20];
	char *st[ ] = { 
						"We will teach you how to...", 
						"how a mountain", 
						"Level how building", 
  						"Erase the past", 
						"Make how million", 
					  	"all through C!"};
	for(register int j = 0;j<6;j++)
	{
		puts(st[j]);
	}

	printf("Input string to be searched ");
	gets(qury);
	printf("\nInput the string which will replace query ");
	gets(str);
	int size = strlen(str);
	char * start;
	char *temp = str;
	puts(temp);

	for(register int i =0;i<6;i++)
	{
		start = strstr(st[i],qury);
		if(start)
		{
			for(int k = 0;k<size;k++)
			{
				*start = *temp;
				start++;
				temp++;
			}
		*start = '\0';
		puts(start);
		}
	}
	
	
	
	
	
	
	for(register int j = 0;j<6;j++)
	{
		puts(st[j]);
	}
}

