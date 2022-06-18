#include<stdio.h>
#include<stdlib.h>
int main( )
{
int a[ ] = { 10, 20, 30, 40, 50 } ; 
int j ;
j = a ; /* store the address of zeroth element */
j = j + 3 ;
printf ( "%d\n" ,*j ) ;
return 0 ;
}
