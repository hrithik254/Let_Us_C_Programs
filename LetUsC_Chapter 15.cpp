#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"../my_functions.h"

void xstrcat(char *, const char *);

int main()
{
	char str[20] = "Sunday";
	char t[] = "-  Monday";
	xstrcat(str,t);
	puts(str);
	puts(t);
	
}


void xstrcat(char * target, const char * source)
{
	while(*target != '\0')
		target++;
		
	while(*source != '\0')
	{
		*target = * source;
		target++;
		source++;
	}
	*target = '\0';
}
