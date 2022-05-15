#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float x =0 , y=0, r, theta,degree;
    const float pi = 3.141592653589793238; 
	printf("enter x coordinate = ");
	scanf("%f",&x);
	printf("Enter y Coordinate = ");
	scanf("%f",&y);
	r = sqrt(pow(x,2)+pow(y,2));
	theta = atan2(y,x);
	degree = theta*180/pi;
	printf("The polar coordinates are (r,degree) = (%f,%f)",r,degree);
	
}

