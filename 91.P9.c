//写函数fm,其功能是:统计出x所指数组中偶数的个数，偶数的平均值
//例如，当数组内容为 :12,5,9,8,23,4,7,21时， 输出结果应该是 : n = 3, ave = 8.00000

int get_EvenNum(int arr[], double*aver,int len)
{
	int count = 0;
	double sum = 0.0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i]%2==0)
		{
			sum += arr[i];
			count++;
		}
	}

	*aver = sum / count;

	return count;
}

void main()
{
	int arr[] = { 12,5,9,8,23,4,7,21 };
	int len = sizeof(arr) / sizeof(arr[0]);
	double aver = 0;
	int count = 0;

	count= get_EvenNum(arr, &aver, len);

	printf("count=%d,average=%lf", count, aver);
}
