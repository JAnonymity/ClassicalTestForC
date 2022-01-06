//程序中，编写函数fun，它的功能是:求小于形参n同时能被3与7整除的所有自然数之和的平方根，并作为函数值返回。
//例如，若n为1000时，程序输出应为s = 153.909064.

double getSqrtOfNum(int num)
{
	double sum = 0.0;
	for (int i = 0; i < num; i++)
	{
		if (i % 3 == 0 && i % 7 == 0)
		{
			sum += i;
		}
	}

	return sqrt(sum);
}

void main()
{
	int num = 0;
	double res = 0;
	scanf_s("%d", &num);

	res = getSqrtOfNum(num);

	printf("%lf", res);
}
