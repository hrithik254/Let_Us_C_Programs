#include<stdio.h>
#include<stdlib.h>

int main()
{
	int money = 0, hnotes,fnotes,tnotes,twnotes,onotes,notes_needed;
	printf("enter money = ");
	scanf("%d",&money);
	
	hnotes = money/100;
	fnotes = (money-100*hnotes)/50;
	tnotes = (money-100*hnotes-50*fnotes)/10;
	twnotes = (money-100*hnotes-50*fnotes-10*tnotes)/2;
	onotes = (money-100*hnotes-50*fnotes-10*tnotes-2*twnotes);
	
	notes_needed = hnotes+fnotes+tnotes+twnotes+onotes;
	printf("number of notes needed = %d\n",notes_needed);
	printf("100 Rupee Notes = %d\n",hnotes);
	printf("50 Rupee Notes = %d\n",fnotes);
	printf("10 Rupee Notes = %d\n",tnotes);
	printf("2 Rupee Notes = %d\n",twnotes);	
	printf("1 Rupee Notes = %d\n",onotes);
}

