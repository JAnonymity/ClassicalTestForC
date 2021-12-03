//行列转置指针

void main()
{
	int origin_matrix[3][3] = {1,2,3,4,5,6,7,8,9};
	int final_matrix[3][3];
	int (*src)[3] = origin_matrix, (*dest)[3] = final_matrix;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			*(*(dest + j) + i) = *(*(src + i) + j);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", *(*(dest + i) + j));
		}
		printf("\n");
	}
}
