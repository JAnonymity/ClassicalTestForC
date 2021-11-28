//两个乒乓球队进行比赛,各出3人。甲队为A,B,C 3人,乙队为X,Y,Z 3人。已
//抽签决定比赛名单。有人向队员打听比赛的名单, A说他不和X比, C说他不和X, Z比, 请
//编程序找出3对赛手的名单。

void main()
{
	for (char a = 'X'; a <= 'Z'; a++)
	{
		for (char b = 'X'; b <= 'Z'; b++)
		{
			if (a != b)
			{
				for (char c = 'X'; c <= 'Z'; c++)
				{
					if (c != a && c != b)
					{
						if (a != 'X' && c != 'X' && c != 'Z')
						{
							printf("A:%c;B:%c;C:%c\n", a, b, c);
						}						
					}
				}
			}
		}
	}
}
