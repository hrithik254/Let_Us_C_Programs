#include<stdio.h>
#include<stdlib.h>

int main()
{
	char character;
	printf("Enter a single character ");
	scanf("%c",&character);
	
	if(character >=65 && character <=90)
	printf("Character Entered is a Capital Chracter\n");
	else if(character >=97 && character <=122)
	printf("Character Entered is a SmallCase Character\n");
	else if(character >=48 && character <=57)
	printf("Character Entered is a Digit \n");
	else 
	printf("Character Entered is a Special Character\n");
}

