//求出能被x整除且不是偶数的各整数，并按从小到大的顺序放在数组中，这些除数的个数通过形参n返回。
//例如，若x中的值为30，则有4个数符合要求，它们是1、3、 5、15。

#define N 50

int get_ChosenNum(int x, int arr[N])
{
	int* p = arr;
	int n = 0;

	for (int i = 1; i <= x; i++)
	{
		if (x % i == 0 && i % 2 != 0)
		{
			*(p + n) = i;
			n++;
		}
	}

	return n;
}

void sort_Arr(int arr[N],int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-1-i; j++)
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
	int x,len;

	int arr[N];

	scanf_s("%d", &x);

	len=get_ChosenNum(x, arr);

	sort_Arr(arr, len);

	for (int i = 0; i < len; i++)
	{
		printf("%d\t", arr[i]);
	}
}
