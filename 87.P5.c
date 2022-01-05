int getFac(int num)
{
	if (num==1)
	{
		return 1;
	}

	return num * getFac(num - 1);
}

void main()
{
	int num1, num2;
	double sum = 0;
	scanf_s("%d %d", &num1, &num2);

	sum = getFac(num1) / (getFac(num2) * getFac(num1 - num2));

	printf("result=%lf", sum);
}
