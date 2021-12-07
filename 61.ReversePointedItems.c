//从第n个数开始的5个数逆序重新排列

#define N 10

void reverse_arr(int arr[],int start_pos,int num)
{
	int* start = arr + start_pos - 1;
	int* end = arr + start_pos + num - 2;//包括开始位置的数

	while (start<end)
	{
		int temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}


}

void main()
{
	int arr[N] = { 2,4,6,8,10,12,14,16,18,20 };
	int pos = 0;
	int num = 0;

	printf("pos=");
	scanf_s("%d", &pos);
	printf("num=");
	scanf_s("%d", &num);

	reverse_arr(arr, pos, num);

	for (int i = 0; i < N; i++)
	{
		printf("%d\t", arr[i]);
	}
}
