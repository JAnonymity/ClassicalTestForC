#define N 10

//判断字符串是否为回文
//判断数字是否为回文

int str_Ispalind(char str[],int len)
{
	int flag = 1;
	for (int i = 0; i < len; i++)
	{
		if (str[i]!=str[len-i-1])
		{
			flag = 0;
		}
	}

	return flag;
}

int num_Ispalind(int num)
{
	int temp = num;
	int len = 0;
	int flag = 1;
	int arr[N];
	while (temp)
	{
		arr[len++] = temp % 10;
		temp /= 10;
	}

	for (int j = len-1; j >= 0 ; j--)
	{
		if (num%10!=arr[j])
		{
			flag = 0;
		}
		num /= 10;
	}

	return flag;
}

void main()
{
	char str[] = "LEVEL";
	int num = 0;
	int sign = 0;
	int len = strlen(str);

	scanf_s("%d", &num);//12321

	/*sign= str_Ispalind(str, len);*/
	sign = num_Ispalind(num);

	if (sign)
	{
		printf("Is a palind string");
	}
	else
	{
		printf("Not a palind string");
	}
}
