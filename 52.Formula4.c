//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和
void main()
{
	double mom = 1, son = 2, sum = 0;

	int i = 0, t;

	while (i<20)
	{
		sum += son / mom;
		t = son;
		son = son + mom;
		mom = t;
		i++;
	}

	printf("%13.10f", sum);
}
