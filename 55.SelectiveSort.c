void Selective_Sort(int arr[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < len ; j++)
		{
			if (arr[min]>arr[j])
			{
				min = j;
			}
		}

		if (min!=i)
		{
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
		
	}
}

void main()
{
	int arr[10] = { 10,9,8,7,6,5,4,3,2,1};
	int len = sizeof(arr) / sizeof(arr[0]);
	
	Selective_Sort(arr, len);

	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
}
