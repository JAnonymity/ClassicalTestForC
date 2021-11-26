//输入一串字符，大写变小写，小写变大写，空白字符删除

int judgeNum(char* str)
{
	int j = 0;
	if (str[j] >= '0' && str[j] <= '9')
	{
		return 0;
	}
	return 1;
}

void changeChar(char* str)
{
	int j = 0;
	if (str[j] >= 'A' && str[j] <= 'Z')
	{
		str[j] = str[j] + 32;
	}
	else if (str[j] >= 'a' && str[j] <= 'z')
	{
		str[j] = str[j] - 32;
	}
}

void main()
{
	char str[30];
	int j = 0;
	gets(str);

	for (int i = 0; str[i]!='\0'; i++)
	{
		if (str[i] != ' ' )
		{
			str[j] = str[i];
			j++;
		}
	}

	str[j] = '\0';

	changeChar(str);

	puts(str);
}
