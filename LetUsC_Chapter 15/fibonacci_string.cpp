#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>

char fibc(int n);

int main()
{
	fibc(4);
}

char fibc(int n)
{
	if(n == 0)
		printf("%c",'a');
	else if(n == 1)
		printf("%c",'b');
	else
	{
		fibc(n-1);
		fibc(n-2);
	}
}
