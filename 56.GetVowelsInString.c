//写一个函数,将一个字符串中的元音字母复制到另一字符串，然后输出。

int judge_Vowels(char* src)
{
	if (*src == 'A' || *src == 'I' || *src == 'E' || *src == 'O' || *src == 'U' || *src == 'a' || *src == 'i' || *src == 'e' || *src == 'o' || *src == 'u')
	{
		return 1;
	}

	return 0;
}

void copy_Vowels(char* src, char* des)
{
	while (*src)
	{
		if (judge_Vowels(src))
		{
			*des++ = *src;
		}
		src++;
	}

	*des = '\0';
}

void main()
{
	char str[30],str2[30];
	char* src, * des;

	src = str;
	des = str2; 

	gets(src);

	copy_Vowels(src, des);

	puts(des);

}
