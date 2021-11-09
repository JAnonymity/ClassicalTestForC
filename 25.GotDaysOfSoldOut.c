// 有1020 个西瓜，第一天卖一半多两个，以后每天卖剩下的一半多两个，问几天以后能卖完，请编程


void main() 
{
	int num = 1020;
	int days = 0;

	while (num!=0)
	{
		num = num / 2 - 2;
		days++;
	}

	printf("%d", days);
}
