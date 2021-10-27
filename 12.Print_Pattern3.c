#include<stdio.h>
//打印以下图案：
//   1
//  121
// 12321
//1234321
//1234321
// 12321
//  121
//   1

void main()
{
	int rows=0,spaces=0,nums=0,num=0;
	
	for(rows=1;rows<=4;rows++)	
	{
		for(spaces=0;spaces<4-rows;spaces++)
		{
			printf(" ");
		}
		
		//共同打印一行数		
		for(num=1;num<rows;num++)
		{
			printf("%d",num);
		}
		for(num=rows;num>=1;num--)
		{
			printf("%d",num);
		}
		
		printf("\n");
	}
	
	for(rows=0;rows<4;rows++)	
	{		 
		for(spaces=0;spaces<rows;spaces++)
		{
			printf(" ");
		}
		
		//共同打印一行数		
		for(num=1;num<=4-rows-1;num++)
		{
			printf("%d",num);
		}
		for(num=4-rows;num>=1;num--)
		{
			printf("%d",num);
		}
		
		printf("\n");
	}
}
