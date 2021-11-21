//有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和


void main()
{	
	int mom = 1, son = 2;
	double sum = 0.0;

	int i = 0;

	while (i<20)
	{
		sum += son / mom;
		son = son + mom;
		mom = son;
		i++;
	}

	printf("%lf",sum);
}
