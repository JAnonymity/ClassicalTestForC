//请编程实现：输入几个整数，判断其中奇数和偶数的个数，并输出奇数和偶数的累加和
#define N 20
void main() 
{
	int arr[N],odd_num=0,odd_sum=0,even_num=0,even_sum=0;
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < N; i++)
	{
		if (arr[i]%2==0)
		{
			even_num++;
			even_sum += arr[i];
		}
		else
		{
			odd_num++;
			odd_sum += arr[i];
		}
	}

	printf("even_num=%d,even_sum=%d\nodd_num=%d,odd_sum=%d\n", even_num, even_sum, odd_num, odd_sum);
}
