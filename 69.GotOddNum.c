// 功能:从低位开始取出整型变量s中奇数位上的数，依次构成个新数放在t中。

void getOddNumOfNum(int num, int* new_num)
{	
	int t = 10,count=0;
	num /= 10;
	*new_num = num % 10;
	while (num)
	{
		num = num / 100;
		*new_num = num % 10 * t + *new_num;
		t *= 10;
	}

}

void main()
{
	int num = 0, new_num = 0;

	scanf_s("%d", &num);

	getOddNumOfNum(num, &new_num);

	printf("%d", new_num);
}
