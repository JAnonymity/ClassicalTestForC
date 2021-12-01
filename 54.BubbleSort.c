void Bubble_Sort(int arr[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
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

void main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	Bubble_Sort(arr, len);

	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
}
