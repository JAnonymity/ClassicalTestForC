#include<stdio.h>

//打印以下图案：
//*******
// *******
//  *******
//   *******
//*****
// *****
//  *****
//   *****
//    *****

void main()
{
	int rows=0,spaces=0;
	
	for(rows=0;rows<4;rows++)
	{
		for(spaces=0;spaces<rows;spaces++)
		{
			printf(" ");
		}
		printf("*******");
		printf("\n");
	}
	
	printf("-----------------\n");
	
	
	for(rows=0;rows<5;rows++)
	{
		for(spaces=0;spaces<rows;spaces++)
		{
			printf(" ");
		}
		printf("*****");
		printf("\n");
	}
}
