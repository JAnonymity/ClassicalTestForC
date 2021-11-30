//写一个函数,输人一个4位数字,要求输出这4个数字字符，但每两个数字间空一个
//空格。如输人1990, 应输出“1 9 9 0”。

int get_EachNum(int num, int *arr, int len)
{
	int realNum = 0;
	for (int i = len-1; i >= 0; i--)
	{
		realNum = realNum*10 + arr[i] % 10;
	}

	return realNum;
}

void print_Num(int num)
{
	if (num)
	{
		print_Num(num / 10);
		printf("%d ", num % 10);
	}
}

void main()
{
	int num = 0;
	int arr[4];
	scanf_s("%d", &num);

	get_EachNum(num,arr,4);

	print_Num(num);
}
