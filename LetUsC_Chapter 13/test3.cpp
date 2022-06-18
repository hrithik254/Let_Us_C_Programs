#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	char s[ ] = "Churchgate: no church no gate" ;
	char tt[27];
//	char t[ 25 ] ;
	char *ss;
	ss = s ;
	while ( *ss != '\0' ) 
	 	*tt++ = *ss++ ;
	printf ( "%s\n", tt ) ;

}

