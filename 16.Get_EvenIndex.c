#include<stdio.h>
#define N 10
//将字符数组 str1 中下标为偶数的元素赋给另一字符数组 str2，并输出 str1 和 str2。

void Get_EvenIndex(char* str1,char* str2)
{
	int i=0,j=0;
	
	for(i=0;str1[i]!='\0';i+=2)
	{
		str2[j++]=str1[i];
	}
	
	str2[j]='\0';//手动加上结束符 
}

void main()
{
	char str1[N],str2[N];
	
	gets(str1);
	gets(str2);
	
	Get_EvenIndex(str1,str2);
	
	printf("%s\n",str1);
	printf("%s\n",str2);
}
