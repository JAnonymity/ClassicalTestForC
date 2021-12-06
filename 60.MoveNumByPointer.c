//4.有n个整数,使前面各数顺序向后移m个位置,最后m个数变成最前面m个数
//例如有10个数1,2,3,4,5,6,7,8,9,10,向后移动5个位置,最后5个数变成最前面的,数据变为6,7,8,9,10,1,2,3,4,5

void move_array(int arr[],int len,int moving_pos)
{
	int* cur = arr;
	int* num_moving=NULL;
	int temp = 0;
	for (int num_fixed = 0; num_fixed < moving_pos; num_fixed++)
	{
		num_moving = *(cur + moving_pos + num_fixed);
		temp = num_moving;//保存当前要移动到前面的数,moving_pos+i指的是第几个数的下标
		//将前面的数组整个向后移动
		for (int j = moving_pos + num_fixed; j > num_fixed; j--)
		{
			*(cur + j) = *(cur + j - 1);
		}
		*(cur + num_fixed) = temp;
	}

}

void main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int moving_pos=0;
	scanf_s("%d", &moving_pos);


	printf("origin:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}

	move_array(arr, 10, moving_pos);

	printf("\nfinal:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
}
