#define N 50

void main()
{
	int peopleNum[N];
	int totalNum = 0;//总人数
	int restNum = 0;//剩余人数
	int count = 1;//报的数

	scanf_s("%d", &totalNum);

	for (int i = 0; i < totalNum; i++)
	{
		peopleNum[i] = i + 1;//赋予每个人编号
	}

	restNum = totalNum;//一开始全部人都在

	while (restNum>1)//只要不是剩下一个人
	{
		int* curNum = peopleNum;//每次报完一轮数,再报第二轮要重头开始
		while (curNum<peopleNum+totalNum)//没有报完一轮,就继续报数,让人滚蛋
		{
			if (*curNum!=0)//设0为被剔除人的标识
			{
				count++;
				if (count==3)//报到3的人滚蛋
				{
					*curNum = 0;//标识滚蛋的人
					count = 1;//从1开始重新1,2,3报数
					restNum--;//让一个人滚了,所以剩余的人数少一个
				}
			}
			curNum++;
		}
	}

	for (int i = 0; i < totalNum; i++)
	{
		if (peopleNum[i]!=0)
		{
			printf("The last one is %d", peopleNum[i]);
			break;
		}
	}
}
