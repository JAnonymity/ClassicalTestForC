//八进制,十六进制转换为十进制

void convert_OctToDigit(char* ptr,int *num)
{
	*num = *ptr - '0';

	while (*(++ptr) != '\0')
	{
		*num = *num * 8 + *ptr - '0';
	}

}

void convert_HexToDigit(char* ptr, int* num)
{
	*num = *ptr - '0';

	while (*(++ptr) != '\0')
	{
		*num = *num * 16 + *ptr - '0';
	}

}

void main()
{
	char s[6];
	int num=0;

	gets(s);

	//convert_OctToDigit(s, &num);
	convert_HexToDigit(s, &num);

	printf("num=%d", num);
}
