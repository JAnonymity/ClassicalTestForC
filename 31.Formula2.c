//有一分数序列2 / 1，3 / 2，5 / 3，8 / 5，13 / 8，21 / 13求该序列的前20 项之和。


void main()
{
	double arr_deno[20];
	double brr_mole[20];
	double sum = 0.0;
	arr_deno[0] = 2;
	arr_deno[1] = 3;

	brr_mole[0] = 1;
	brr_mole[1] = 2;

	sum = arr_deno[0] / brr_mole[0] + arr_deno[1] / brr_mole[1];

	for (int i = 2; i < 20; i++)
	{		
		arr_deno[i] = arr_deno[i - 1] + arr_deno[i - 2];
		brr_mole[i] = brr_mole[i - 1] + brr_mole[i - 2];
		sum += arr_deno[i] / brr_mole[i];
	}

	printf("sum=%lf", sum);
}
