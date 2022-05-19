#include<stdio.h>
#include<stdlib.h>
void rom_year(int);
void print(int,char);
int main()
{
	int year;
	
	printf("Enter Year : ");
	scanf("%d",&year);
	printf("%d in roman years is : ",year);
	rom_year(year);
}
void print(int a, char b)
{
	for(int i =1;i<=a;++i)
	{
		printf("%c",b);
	}
}

void rom_year(int yer)
{
	int m,d,c,l,x,v,i;
	
	m = yer/1000;
	yer %= 1000;
	print(m,'M');
	
	d = yer/500;
	yer %= 500;
	print(d,'D');
	
	c = yer/100;
	yer %= 100;
	print(c,'C');
	
	l = yer/50;
	yer %= 50;
	print(l,'L');
	
	x = yer/10;
	yer %= 10;
	print(x,'X');
	
	v = yer/5;
	yer %= 5;
	print(v,'V');
	
	i = yer;
	print(i,'I');
	
		
}

