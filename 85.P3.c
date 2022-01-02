//找出用1、2、3、4四个数字，能组成多少个互不相同且无重复数字的三位数

int get_CountNum()
{
	int count = 0;
	for (int i = 1; i <= 4; i++)
	{
		for (int j = 1; j <= 4; j++)
		{
			if (i!=j)
			{
				for (int k = 1; k <= 4; k++)
				{
					if (j!=k&&k!=i)
					{
						for (int l = 1; l <= 4; l++)
						{
							if (l!=j && l != i &&k!=i&& k != l)
							{
								count++;
								printf("%d\t%d\t%d\t%d\n", i, j, k, l);
							}
						}
					}
				}
			}
		}
	}

	return count;
}

void main()
{

	int num=0;

	num=get_CountNum();

	printf("count=%d", num);
}
