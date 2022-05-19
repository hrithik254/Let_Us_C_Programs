#include<stdio.h>
#include<stdlib.h>
int main()
{	
int year=0,inv,alt;
while(alt>inv)
{
year++;
alt=120*year;
inv=(1000*year)-4000;
}
printf("The minimum year is %d",year);
}

