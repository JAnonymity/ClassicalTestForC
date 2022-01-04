
// 功能是:将大于整数m且紧靠m的k个素数存入所指的数组中。
//例如，若输入17, 则应输出19、23、 29、31、37。

#define N 50

void getNumOfArray(int m,int arr[],int num)
{
	int count = 0,i,j;
	for (i = m + 1; count < num; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j==i)
		{
			arr[count] = i;
			count++;
		}
	}
}

void main()
{
	int m, num;
	int arr[N];
	scanf_s("%d", &m);

	scanf_s("%d", &num);


	getNumOfArray(m, arr, num);

	for (int i = 0; i < num; i++)
	{
		printf("%d\t", arr[i]);
	}
}
