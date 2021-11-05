#include<stdio.h>

void main()
{
	int origin_matrix[4][3];
	int result_matrix[3][4];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf_s("%d",&origin_matrix[i][j]);
		}
	}

	printf("Origin:\n");

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\t", origin_matrix[i][j]);
		}
		printf("\n");
	}


	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			result_matrix[j][i] = origin_matrix[i][j];
		}
	}
	
	printf("Result:\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", result_matrix[i][j]);
		}
		printf("\n");
	}
}
