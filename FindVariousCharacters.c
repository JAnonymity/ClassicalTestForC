#include<stdio.h>

//输入一行字符，分别统计出其中字母、空格、数字和其他字符的个数。

void main()
{
	int letters=0,spaces=0,nums=0,others=0;
	char ch;
	int i=0;
	
	printf("Plz input a string:\n");
	
	
	while((ch=getchar())!='\n')
	{
		if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
		{
			letters++;
		}
		else if(ch==' ')
		{
			spaces++;
		}
		else if(ch>='0'&&ch<='9')
		{
			nums++;
		}
		else
		{
			others++;
		}
	}
	
	printf("letters=%d,spaces=%d,nums=%d,others=%d",letters,spaces,nums,others);
	
	
	
}
