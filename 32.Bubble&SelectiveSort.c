//编一函数使用冒泡,选择法对若干个整数按从小到大的顺序排序

void bubble_sort(int arr[],int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void selective_sort(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int k = i;
		for (int j = i+1; j < n ; j++)
		{
			if (arr[k] > arr[j])
			{
				k = j;
			}
			if (k!=i)
			{
				int temp = arr[k];
				arr[k] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

void print(int arr[],int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
}

void main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1 };

	printf("origin:\n");
	print(arr, 10);


	printf("final:\n");
	//bubble_sort(arr, 10);
	selective_sort(arr, 10);

	print(arr, 10);
}
