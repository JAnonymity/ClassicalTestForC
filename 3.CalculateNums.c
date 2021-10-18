#include<stdio.h>

//3.输入一个正整数求出它是几位数,输出原数和位数。

int count_num(int digit_num)
{
	int nums=0;
	while(digit_num)
	{
		nums++;
		digit_num/=10;
	}
	
	return nums;
}

void main()
{
	int digit_num=0,nums=0;
	printf("Print a digitnum:");
	scanf("%d",&digit_num);	
	
	nums=count_num(digit_num);
	
	printf("origin_num=%d,nums of %d is %d",digit_num,digit_num,nums);
	
}
