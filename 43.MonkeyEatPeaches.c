//猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个.
//第二天早上又将剩下的桃子吃掉一半，又多吃了一个。
//以后每天早上都吃了前一天剩下的一半零一个。
//到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。

int get_PeachesNum(int day)
{
	if (day==10)
	{
		return 1;
	}

	return (get_PeachesNum(day + 1) + 1) * 2;
}

void main()
{
	int day = 1;

	int num = get_PeachesNum(day);

	printf("%d", num);
}
