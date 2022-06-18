#include<stdio.h>
#include<stdlib.h>
#include"../my_functions.h"

int main()
{
	char name[] = "Anand";
	int arr[] = {1,2,3,4};
	printf("%c",3[name]);
	printf("\n%d",2[arr]);
	char c[ 2 ] = "A" ;
	printf ( "\n%c", c[ 0 ] ) ;
	printf ( "\n%s", c ) ;
	char s[ ] = "Get organised! learn C!!" ;
	printf ( "%s\n", &s[ 2 ] ) ;
	printf ( "%s\n", s ) ;
	printf ( "%s\n", &s ) ;
	printf ( "%c\n", s[ 2 ] ) ;
//    bool t = (&s == s);
    printf("%u %u \n",s,&s);
}

