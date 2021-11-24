//给一个不多于5位的正整数
//要求：一、求它是几位数，二、逆序打印出各位数字。

int get_DigitNum(int num)
{
	int count = 0;
	while (num)
	{
		count++;
		num /= 10;
	}

	return count;
}

void print_EachNum(int num,int len)
{
	while (len)
	{
		printf("%d", num % 10);
		num /= 10;
		len--;
	}
}

void main()
{
	int num;
	int digit = 0;
	do
	{
		scanf_s("%d", &num);
		digit = get_DigitNum(num);
	} while (digit > 5);

	print_EachNum(num, digit);
}
