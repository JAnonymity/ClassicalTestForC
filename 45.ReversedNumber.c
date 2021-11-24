//回文数

int JudgeReversedNum(int num)
{
	int reversedNum = 0, originNum = num;
	while (num)
	{
		reversedNum = reversedNum * 10 + num % 10;
		num /= 10;
	}

	return reversedNum == originNum ? 1 : 0;
}

void main()
{
	int num, res;
	scanf_s("%d", &num);

	res = JudgeReversedNum(num);

	if (res)
	{
		printf("%d is a Palindrome Number\n", num);
	}
	else
	{
		printf("%d is not a Palindrome Number\n", num);
	}
}
