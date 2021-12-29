//将s所指字符串中下标为偶数同时ASCII值为奇数的字符删除

void del_OrderedCharOfStr(char *str,char *t)
{
	int len = strlen(str);
	int i = 0, j = 0;
	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0 && str[i] % 2 != 0)
		{
			continue;
		}
		t[j++] = str[i];
	}

	t[j] = '\0';
}

void main()
{
	char str[] = "ABCDEFG12345";
	char* t=str;
	del_OrderedCharOfStr(str, t);

	puts(t);
}
