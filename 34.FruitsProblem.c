//用 40 元钱买苹果、西瓜和梨共100 个，且三种水果都有。
//已知苹果 0.4 元一个，西瓜4 元一个，梨 0.2 元一个。
//问可以买多少个？编程输出所有购买方案。

void main()
{
	for (int apple = 0; apple < 100; apple++)//40/0.4
	{
		for (int wmelon = 0; wmelon < 10; wmelon++)
		{
			for (int pear = 0; pear < 200; pear++)//40/0.2
			{
				if ((apple + wmelon + pear == 100)&&(apple * 0.4 + wmelon * 4 + pear * 0.2==40))
				{
					printf("apple-%d:watermelon-%d:pear-%d\n", apple, wmelon, pear);
				}
			}
		}
	}
}
