//61.请编程实现：计算1 至50 中是7 的倍数的数值之和。

int get_7Between1And50()
{
	int sum = 0;
	for (int i = 1; i <= 50; i++)
	{	
		if (i % 7 == 0)
		{
			sum += i;
		}		
	}
	return sum;
}

void main() 
{
	int res=get_7Between1And50();

	printf("%d", res);
}
