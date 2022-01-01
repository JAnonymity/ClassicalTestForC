//编写函数fun,其功能是:验证参数n是否可以分解成2个素数相乘，是则返回1，否则返回0，并通过指针变量x、y返
//回分解后的2个素数值，要求* x < *y。主程序中将打印出分解结果。
//例如，111 = 3 * 37, 当函数fun的参数n为111时，可以分解为2个素数(3和37) 的乘积，函数返回值为1。

int is_Prime(int n)
{
	int flag = 1;
	for (int i = 2; i < n; i++)
	{
		if (n%i==0)
		{
			flag = 0;
		}
	}

	return flag;
}

int judgeNum(int n)
{
	int flag = 0;
	for (int i = 2; i < n; i++)
	{
		if (is_Prime(i)&& is_Prime(n/i)&&i<n/i)
		{
			flag = 1;
			printf("%d %d\n", i, n / i);
			break;
		}
	}

	return flag;
}

void main()
{
	int num,flag;

	scanf_s("%d",&num);

	flag=judgeNum(num);

	if (flag)
	{
		printf("%d is", num);
	}
	else
	{
		printf("%d is not", num);
	}
}
