//请编程实现：不用strcmp将两个字符串 s1 和 s2 比较，输出ASCⅡ码的差值

int my_strcmp(char* s1, char* s2)
{
	while (*s1==*s2)
	{
		if (*s1=='\0')
		{
			return 0;
		}
	}

	return *s1 - *s2;
}

void main()
{
	char s1[100];
	char s2[100];

	gets(s1);
	gets(s2);

	int res = my_strcmp(s1, s2);

	printf("%d", res);
}
