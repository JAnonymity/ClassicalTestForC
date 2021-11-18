//输出左下三角和左上三角元素
void myprint(int arr[][5], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void main()
{
	int arr[5][5];
	int n = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			arr[i][j] = n;
			n++;
		}
	}

	myprint(arr, 5);

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	for (int i = 0; i < 5; i++)
	{
		for (int j = i; j < 5; j++)
		{
			printf("%3d", arr[i][j]);			
		}
		printf("\n");
	}

}
