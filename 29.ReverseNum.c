//编一个函数实现将一个整型的一维数组中的数逆序存放，不使用辅助数组
#define N 10
void reverse_num(int arr[N])
{
	int i = 0, j = N - 1;

	while (i<j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}

void print_num(int arr[N])
{
	for (int i = 0; i < N; i++)
	{
		printf("%d\t", arr[i]);
	}
}

void main()
{
	int arr[N] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("origin:\n");
	print_num(arr);

	printf("\n");
	reverse_num(arr);

	printf("final:\n");
	print_num(arr);
}
