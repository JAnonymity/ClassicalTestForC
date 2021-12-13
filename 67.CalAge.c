//输入一位学生的生日,并输入当前的日期,求年龄

void main()
{
	int birthday = 0, birthmonth = 0, birthyear = 0;
	int presentday = 0, presentmonth = 0, presentyear = 0;
	int age = 0;

	printf("birthyear,birthmonth,birthday:\n");
	scanf_s("%d-%d-%d", &birthyear, &birthmonth, &birthday);
	printf("presentyear,presentmonth,presentday:\n");
	scanf_s("%d-%d-%d", &presentyear, &presentmonth, &presentday);

	age = presentyear - birthyear;

	if (presentmonth < presentmonth)
	{
		age--;
	}

	if (presentmonth == birthmonth && presentday < birthday)
	{
		age--;
	}

	printf("age=%d", age);
}
