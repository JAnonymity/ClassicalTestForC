//程序中求出小于或等于lim的所有素数并放在a数组中，并返回所求出的素数的个数。

int getPrimeNum(int* arr,int lim)
{
	int len = 0;
	int j = 0;
	for (int i = 2; i <= lim; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j>=i)
		{
			*(arr+len) = i;
			len++;
		}
	}

	return len;
}

void main()
{
	int lim;
	int arr[50];
	int len = 0;
	scanf_s("%d", &lim);

	len=getPrimeNum(arr, lim);

	for (int i = 0; i < len; i++)
	{
		if (i % 5 == 0)
		{
			printf("\n");
		}
		printf("%d\t", arr[i]);		
	}

	printf("\n");

	printf("len=%d", len);

}
