//输入整数a 和b，若a*a+b*b 大于100，则输出a*a+b*b 百位以上的数字，否则输出两数之和。
//判断输入的正整数是否既是5 又是7 的整倍数。若是，则输出Yes；否则输出No.

#include<stdio.h>

int judgeAandB(int a, int b)
{
	if (a*a+b*b>100)
	{
		return (a * a + b * b) / 100;
	}

	return a + b;
}

void judge5and7(int n)
{
	if (n % 5 == 0 && n % 7 == 0)
	{
		printf("Yes");
	}

	else
	{
		printf("No");
	}
	
}



void main()
{
	int a, b, res, n;

	printf("a,b=");

	scanf_s("%d%d", &a, &b);

	res=judgeAandB(a, b);

	printf("%d\n", res);

	printf("n=");

	scanf_s("%d", &n);

	judge5and7(n);
}
