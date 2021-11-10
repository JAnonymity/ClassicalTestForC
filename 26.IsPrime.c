//主函数中调用isprime，找出2 到1000 之间的所有素数。

void is_prime()
{
	int i, j, k = 0;
	for (i = 2; i <= 1000; i++)
	{
		for ( j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break;
			}
		}
		if (j>=i)
		{
			printf("%d\t", i);
		}	
	}
}

void main() 
{

	is_prime();
}
