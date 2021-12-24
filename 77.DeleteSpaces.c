//删除字符串中的所有空格

#define N 5

void delSpace(char str[])
{
	
	char* dest = str;
	char *origin = str;
	while (*origin)
	{
		if (*origin != ' ')
		{
			*dest = *origin;
			dest++;
		}
		origin++;
	}
	*dest = '\0';
}

void main()
{
	char str[] = { "Jian Bing Guo Zi Zhen De Hen Qiang !"};

	delSpace(str);

	puts(str);
}
