#include<stdio.h>
#include<stdlib.h>

int main()
{
	float hardness,carbon_content,tensile_strength;
	bool con1,con2,con3;
	printf("Enter the Hardness");
	scanf("%f",&hardness);
	printf("Enter the Carbon Content ");
	scanf("%f",&carbon_content);
	printf("Enter the Tensile Strength");
	scanf("%f",&tensile_strength);
	
	con1 = (hardness>50);
	con2 = (carbon_content<0.7);
	con3 = (tensile_strength>5600);
	
	if(con1 && con2 && con3)
		printf("Grade 10");
	else if(con1 && con2)
		printf("Grade 9");
	else if(con2 && con3)
		printf("Grade 8");
	else if(con1 && con3)
		printf("Grade 7");
	else if(con1 || con2 || con3)
		printf("Grade 6");
	else
		printf("Grade 5");
		
	return 0;
}

