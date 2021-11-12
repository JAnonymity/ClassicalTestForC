//打印杨辉三角，要求打印出10行
#define N 10
void got_YHtriangle(int triangle[N][N])
{

	//保证最左侧的1和对角线上的1
	for (int i = 0; i < N; i++)
	{
		triangle[i][0] = 1;
		triangle[i][i] = 1;
	}
  //保证从第三行第二列开始,该元素等于上两个元素之和
	for (int i = 2; i < N; i++)
	{
		for (int j = 1; j < N; j++)
		{
			triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
		}
	}
}

void print_YHtriangle(int triangle[N][N])
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%d\t", triangle[i][j]);
		}
		printf("\n");
	}
}

void main()
{
	int triangle[N][N] = { 0 };
	got_YHtriangle(triangle);
	print_YHtriangle(triangle);
}
