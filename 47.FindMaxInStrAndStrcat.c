//在str1串中最大元素后边插入字符串ab
int judgeMaxEle(char* str)
{
	int pos=0,i=0;
	char max=str[0];

	while (str[i])
	{
		if (str[i] >max)
		{
			max = str[i];
			pos = i;
		}
		i++;
	}

	return pos;
}

void my_strcpy(char* str1, char* str2,int max_pos)
{
	int i = 0;

	while (str2[i])
	{
		i++;
	}

	for (int j = max_pos; str1[j] != '\0' ; j++)
	{
		str2[i++] = str1[j];
	}
	

	str2[i] = '\0';
}

void main()
{
	char str1[20];
	char str2[20]="ab";
	int max_pos = 0;
	gets(str1);

	max_pos=judgeMaxEle(str1);

	my_strcpy(str1, str2, max_pos);

	puts(str2);
}
