#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include"../my_functions.h"

void gotoxy(int x, int y);

int main()
{
	int x = 3, y = 3;
	int cxwrd[][4] = {
						{1,4,15,7},
						{8,10,2,11},
						{14,3,6,13},
						{12,9,5,0},
					};
	
	for(register int i =0;i<4;i++)
	{
		for(register int j = 0;j<4;j++)
		{
			gotoxy(x,y);
			printf("%d",cxwrd[i][j]);
			x += 2;
		}
		x -= 6;
		y++;
	}
}

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

