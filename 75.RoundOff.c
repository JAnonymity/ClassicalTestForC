// 使变量h中的值保留两位小数，并对第三位进行四舍五入。
//例如，若h值为1234.567, 则函数返回1234.570000; 若h值为1234.564, 则函数返回1234.560000。

double get_RoundOffValue(double num)
{
	int temp = (int)(num * 1000 + 5) / 10;
	return (double)temp / 100;
}

void main()
{
	double h = 1234.567;
	double sum = 0;

	sum = get_RoundOffValue(h);

	printf("%lf", sum);
}
