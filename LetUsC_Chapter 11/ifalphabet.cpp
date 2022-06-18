#include<stdio.h>
#include<stdlib.h>
#include "upCase.cpp"
#include "case.cpp"
int main()
{
	char a;
	printf("enter chracter : ");
	scanf("%c",&a);
	if(CASE(a) && UPCASE(a))
		printf("Aplhabet detected");
	else
		printf("Not an alphabet");
}

