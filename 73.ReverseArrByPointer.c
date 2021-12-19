//逆序数组

void reverse_arr(int arr[], int len)
{
	int* left = arr;
	int* right = arr + len - 1;

	while (left<right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}

void main()
{
	int arr[] = { 9,5,1,4,1,3,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	reverse_arr(arr,size);

	for (int i = 0; i < size; i++)
	{
		printf("%d\t", arr[i]);
	}
}
