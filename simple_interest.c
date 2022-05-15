#include<stdio.h>
#include<stdlib.h>
void main()
{
    int p, n;
    float r, si;
    p = 1000 ; 
    n = 3 ; 
    r = 8.5 ;

    // for calculating simple interest 

    si = p * n * r / 100 ;
    printf("%f",si);
    
}
