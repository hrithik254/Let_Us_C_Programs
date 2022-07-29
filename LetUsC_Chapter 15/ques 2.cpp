#include<stdio.h>
#include<string.h>

int main()
{
	char str[] = "12345";
	char *i = str;
	int k = 0;
	int temp = 0;
	while(*i != '\0')
	{
		k += (*i -48);
		k *=10;
		i++;
	}
	k = k/10;
	printf("\n%d",k);
}

int strint(const char *str)
{
	int ar[10];
	while(*str != '\0')
	{
		if(*str == 'x' || *str == 'X')
		{
			*ar = 10;
		}
		else
		{
			int temp = *str;
			*ar = (temp - 48);	
		}
		str++;
		ar++;
	}
	return ar
}
