//程序中，编写函数fun, 该函数的功能是:统计一行字符串中单词的个数，作为函数值返回。

int getNumOfWords(char* ptr)
{
	int count = 0;
	while (*ptr!='\0')
	{
		if (*ptr!=' '&& *(ptr + 1) == ' ' || *(ptr + 1) == '\0')
		{
			count++;
		}
		ptr++;
	}

	return count;
}

void main()
{
	char words[] = "I am a boy";
	int count = 0;	

	count = getNumOfWords(words);

	printf("%d", count);
}
