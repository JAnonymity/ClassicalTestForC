// 功能: 1982年我国第三次人口普查，结果全国人口为10.3亿，假如人口增长率为5% 。编写个程序求在公元多少年总人口翻了一番。

void main()
{
	double origin_population = 10.3, increase_rate = 0.05;
	double current_population = origin_population * (1 + increase_rate);
	int year = 1;

	while (current_population<origin_population*2)
	{
		current_population = current_population * (1 + increase_rate);
		year++;
	}
	year = year + 1982;
	printf("%d", year);
}
