//请编写函数fun,函数的功能是:求出数组周边元素的平均值并作为函数值返回给主函数中的s。
#define N 5
double getRoundItem(int arr[][N],int len)
{
	double sum = 0.0;
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (i == 0 || i == len - 1 || j == 0 || j == len - 1)
			{
				sum += arr[i][j];
				count++;
			}
		}
	}

	return sum / count;
}

void main()
{
	int arr[][N] = { 0,1,2,7,9,1,9,7,4,5,2,3,8,3,1,4,5,6,8,2,5,9,1,4,1 };
	double sum = 0;
	sum=getRoundItem(arr,N);

	printf("%lf", sum);
}
