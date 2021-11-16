//有一个5×4的矩阵,编程实现:找出该矩阵中每行元素的最大值,并使该值成为该行的首列元素
void main()
{
	int matrix[5][4] = { {6,7,8,9},{2,7,8,7},{4,8,9,5},{2,4,6,7},{2,4,1,2}};
	int max_row = 0, max_pos = 0;

	for (int i = 0; i < 5; i++)
	{
		max_row = matrix[i][0];
		for (int j = 0; j < 4; j++)
		{
			if (max_row<matrix[i][j])
			{
				max_row = matrix[i][j];
				max_pos = j;
			}
		}

		int temp = matrix[i][max_pos];
		matrix[i][max_pos] = matrix[i][0];
		matrix[i][0] = temp;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%4d", matrix[i][j]);
		}
		printf("\n");
	}
}
