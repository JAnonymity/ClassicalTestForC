#include<stdio.h>

//7.打印以下图案：
//   *
//  ***
// *****
//*******
//*
//**
//***
//****

void main()
{
	int rows=0,spaces=0,stars=0;
	 
	for(rows=1;rows<=4;rows++)
	{
		for(spaces=0;spaces<4-rows;spaces++)
		{
			printf(" ");
		}
		
		for(stars=0;stars<2*rows-1;stars++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	for (int rows = 1; rows <= 4; rows++)
    	{
		for (int stars = 0; stars < rows; stars++)
		{
		    printf("*");
		}
		printf("\n");
    	}
}

