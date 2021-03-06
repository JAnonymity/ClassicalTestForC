// 一个数如果恰好等于它的因子之和, 这个数就称为“完数”。
//例如, 6的因子为1,2,3, 而6 = 1 + 2 + 3, 因此6是“完数”。
//编程序找出1000之内的所有完数

int judge_PerfectNum(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;			
		}		
	}

	if (n == sum)
	{
		return 1;
	}

	return 0;
}


void main()
{
	for (int i = 1; i < 1000; i++)
	{
		if (judge_PerfectNum(i)==1)
		{
			printf("%d\n", i);
		}
	}
}
