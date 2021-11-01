#include<stdio.h>

//编写一个程序，将两个字符串连接起来，不要使用strcat 函数。 
//将字符数组 a 中的全部字符复制到字符数组 b 中。不要使用 strcpy 函数

void mystrcat(char *str1,char *str2)
{
	int i=0,j=0;
	
	while(str1[i]!='\0')
	{
		i++;
	}
	
	while(str2[j]!='\0')
	{
		str1[i++]=str2[j++];
	}
	
	str1[i]='\0';
}

void mystrcpy(char *str1,char *str2)
{
	int i=0;
	
	while(str1[i]!='\0')
	{
		str2[i]=str1[i];
		i++;
	}
	
	str2[i]='\0';
}

void main()
{
	char arr_a[40],arr_b[40];
	
	scanf("%s %s",arr_a,arr_b);
	
	//mystrcat(arr_a,arr_b);
	
	puts(arr_a);
	
	mystrcpy(arr_a,arr_b);
	
	puts(arr_b);
}
