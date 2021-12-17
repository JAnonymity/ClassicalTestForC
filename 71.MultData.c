#define N 3
//使数组右上半三角元素中的值乘以m。

void MultiplyItem(int arr[][N], int num)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = i; j < N; j++)
		{
			arr[i][j] *= num;
		}
	}
}

void main()
{
	int arr[N][N] = {1,9,7,2,3,8,4,5,6};
	int m;

	scanf_s("%d", &m);

	MultiplyItem(arr, m);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}
