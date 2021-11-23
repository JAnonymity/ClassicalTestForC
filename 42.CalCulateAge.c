//有5个人坐在一起，问第五个人多少岁？
//他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。
//问第三个人，又说比第2人大两岁。
//问第2个人，说比第一个人大两岁。
//最后问第一个人，他说是10岁。请问第五个人多大？

int get_Manage(int man)
{
	if (man==1)
	{
		return 10;
	}
	return get_Manage(man - 1) + 2;
}

void main()
{
	int man = 5;

	int age = get_Manage(man);

	printf("%d", age);
}
