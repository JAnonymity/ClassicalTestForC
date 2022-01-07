double get_FormRes(int num)
{
	double sum = 0.0, term = 0;
	for (int i = 1; i <= 10; i++)
	{
		term = 1.0 / (i * (i + 1));
		sum += term;
	}

	return sum;
}

void main()
{
	int num;
	double res;
	scanf_s("%d", &num);

	res = get_FormRes(num);

	printf("%lf", res);
}
