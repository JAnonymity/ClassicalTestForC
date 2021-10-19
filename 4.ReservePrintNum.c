#include<stdio.h>

//4.输入一个正整数，输出原数并逆序打印出各位数字。

void reveseprint(int num)
{
	int temp_num=num;
	
	printf("reveseprint1:\n");
	
	while(temp_num)
	{
		printf("%d\t",temp_num%10);
		temp_num/=10;
	}
}

int reveseprint2(int num)
{
	int temp_num=0;
	while(num)
	{
		temp_num=temp_num*10+num%10;
		num/=10;
	}
	
	return temp_num;
}

void main()
{
	int num=0,res=0;
	scanf("%d",&num);
	
	reveseprint(num);
	res=reveseprint2(num);
	
	printf("reveseprint2:%d\n",res);
}
