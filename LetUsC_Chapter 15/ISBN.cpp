#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<math.h>


void strint(const char *str,int*); 

int main()
{
	char str[11];
	int c[10], temp =0;
	printf("enter isbn string : ");
	gets(str);
	strint(str,c);
	int * t = c;
	for(register int i = 0;i<10;i++)
	{
		temp += (i+1)*t[i];
		t++;
	}
	printf("%d",temp);
	if(temp%11 == 0)
		printf("\nISBN : %s is Valid",str);
	else
		printf("\nISBN : %s is Invalid",str);
	
}

void strint(const char *str,int *ar)
{
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
		printf("\n %d ",*ar);
		str++;
		ar++;
	}
}
