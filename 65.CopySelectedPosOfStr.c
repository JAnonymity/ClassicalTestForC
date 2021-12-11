#define N 30

// 7.有一字符串, 包含n个字符。写一函数, 将此字符串中从第m个字符开始的全部字符复制成为另一个字符串。

void Copy_StrPos(char originstr[], char finalstr[], int pos)
{
	char* src = originstr + pos;	
	char* dest = finalstr;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
}

void main()
{
	char str[N] = "jianbinguozi";
	char res[N];
	int pos;

	scanf_s("%d", &pos);

	Copy_StrPos(str,res,pos);

	puts(res);
}
