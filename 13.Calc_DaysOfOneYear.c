#include<stdio.h>

//给出年、月、日，计算该日是该年的第几天。

int isLeapYear(int year)
{
	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}
	
	return 0;
}

void main()
{
	int months[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; //没有0月 
	int year,month,day,i=0,sum_day=0;
	printf("year,month,day:");
	
	scanf("%d,%d,%d",&year,&month,&day);
	
	for(i=1;i<month;i++)
	{
		sum_day+=months[i];
	}
	
	if(month>=2)
	{
		sum_day=sum_day+day+isLeapYear(year);
	}
	printf("%d-%d-%d",year,month,day);
	printf("is the %dth day in this year.\n",sum_day);
}
