//用公式计算：e≈1 + 1 / 1!+ 1 / 2!… + 1 / n!，精度为10 - 6。

double get_Fac(int n)
{
	double term = 1.0;
	for (int i = 1; i <= n; i++)
	{
		term /= i;
	}

	return term;
}

void main()
{
	int i=1;
	double e = 1.0;

	for (int i = 1; get_Fac(i) > 0.0000001; i++)
	{
		e += get_Fac(i);
	}

	printf("e=%lf", e);
}
