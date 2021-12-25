//求1000以内的所有恰好能分解成10组两个素数之和(5+ 109和109+ 5被认为是同一组)的偶数
#include<math.h>
int is_Prime(int n)
{
	int flag = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n%i==0)
		{
			flag = 0;
		}
	}

	return flag;
}

int judgeSpeicalNum(int arr[], int n)
{
	int count = 0, num = 0;
	for (int i = 2; i < n; i+=2)
	{
		count = 0;
		for (int j = 2; j <= i/2; j++)
		{
			if (is_Prime(j)&&is_Prime(i-j))
			{
				count++;
			}
		}
		if (count==10)
		{
			arr[num++] = i;
		}
	}

	return num;
}

void main()
{
	int arr[50],len=999;
	int n = 0;

	n=judgeSpeicalNum(arr, len);

	for (int i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}
}
