#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	
	char s[ ] = "No two viruses work similarly" ;
//	Chapter 15: Strings 307
	int i = 0 ;
	while ( s[ i ] != '\0' )
	{
		printf ( "%c %c\n", s[ i ], *( s + i ) ) ;
		printf ( "%c %c\n", i[ s ], *( s + i ) ) ;
		i++ ;
	}

}

