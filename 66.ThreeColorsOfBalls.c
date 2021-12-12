// 若一个口袋中放有12个球，其中有3个红的,3个白的和6个黒的，问从中任取8个共有多少种不同的颜色搭配？

void main()
{
	int numRed = 0, numBlack = 0, numWhite = 0;
	int count = 1;

	for (numRed = 0; numRed <= 3; numRed++)
	{
		for (numWhite = 0; numWhite <= 3; numWhite++)
		{
			numBlack = 8 - numRed - numWhite;
			if (numBlack<=6)
			{
				printf("No.%d:\tRed:%2d\t White:%2d\t Black:%2d\n",count++, numRed, numWhite, numBlack);
			}
		}
	}
}
