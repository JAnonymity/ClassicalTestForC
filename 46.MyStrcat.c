//输入两个字符串str1和str2,不用strcat将str2前五个字符连到str1中,如果长度小于5,则所有元素都接入str1

void my_strcpy(char* str1, char* str2)
{
	int i = 0, j = 0 ;
	int len = strlen(str2);

	if (len>5)
	{
		len = 5;
	}

	while (str1[i])
	{
		i++;
	}

	while (j<len)
	{
		str1[i] = str2[j];
		i++;
		j++;
	}

	str1[i] = '\0';
}

void main()
{
	char str1[50];
	char str2[30];

	gets(str1);
	gets(str2);

	my_strcpy(str1, str2);

	puts(str1);
}
