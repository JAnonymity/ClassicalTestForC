//将字符串abcd赋给一个字符数组,然后开始间隔一个空格输出

void insert_Str(char str[])
{
	char* p = str;

	while (*p)
	{		
		printf("%c", *p);
		if (*(p + 1))
		{
			putchar(' ');
		}
		p++;		
	}
}



void main()
{
	char str[] = "abcd";

	insert_Str(str);
}
