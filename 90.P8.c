//写函数fun,其功能是:求n (n<10000) 以内的所有四叶玫瑰数
//如果一个4位正整数等于其各个数字的4次方之和，则称该数为四叶玫瑰数。
//1634 = 1 * 1 * 1 * 1 + 6 * 6 * 6 * 6 + 3 * 3 * 3 * 3 + 4 * 4 * 4 * 4, 因此1634就是个四叶玫瑰数 。

int get_FourRoseNum(int num,int arr[])
{
	int* ptr = arr;
	int count = 0;
	for (int i = 1634; i <= num; i++)
	{
		int sum = 0;
		int term = 0;
		int tempNum = i;
		while (tempNum)
		{
			term = (tempNum % 10) * (tempNum % 10) * (tempNum % 10) * (tempNum % 10);			
			sum += term;
			tempNum /= 10;
		}

		if (sum==i)
		{
			*(ptr + count) = i;
			count++;
		}
	}

	return count;
}

void main()
{
	int num;
	int arr[20];
	int count = 0;
	scanf_s("%d", &num);

	count=get_FourRoseNum(num, arr);

	for (int i = 0; i < count; i++)
	{
		printf("%d\t", arr[i]);
	}
}
