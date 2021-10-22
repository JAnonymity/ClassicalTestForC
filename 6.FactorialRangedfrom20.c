#include<stdio.h>

//6.求 1!+2!+3!+……+20!，将结果输出。

int get_factorialone(int num)
{
	int i=0,p=1;
	for(i=1;i<=num;i++)
	{
		p*=i;
	}
	
	return p;
}

int get_factorialtwo(int num)
{
	if(num==1)
	{
		return 1;
	}
	return num*get_factorialtwo(num-1);
}

void main()
{
	int sum=0;
	int i=0;
	
	for(i=1;i<=20;i++)
	{
		sum+=get_factorialone(i);
		//sum+=get_factorialtwo(i);
	}
	
	printf("sum=%d\n",sum);
		
}
