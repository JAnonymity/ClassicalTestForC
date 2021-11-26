//.将一个十进制数转换为八进制


void main()
{
	int digitNum, len;
	int octnum[20];
	scanf_s("%d", &digitNum);

	int len = 0;

	while (digitNum)
	{
		octnum[len] = digitNum % 8;
		len++;
		digitNum /= 8;
	}

	for (int i = len -1; i >= 0; i--)
	{
		printf("%d", octnum[i]);
	}
}
