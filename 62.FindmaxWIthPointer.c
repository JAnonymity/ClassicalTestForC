//找出最大元素及其下标和地址值

int* findmax(int* s, int t, int* k)
{
	int max = s[0],*max_pos=NULL;
	for (int i = 0; i < t; i++)
	{
		if (s[i]>max)
		{
			max = s[i];
			max_pos = &s[i];
			*k = i;
		}
	}

	return max_pos;
}

void main()
{
	int a[10] = { 12,23,34,45,56,67,78,89,11,22 }, pos, * add;
	add = findmax(a, 10, &pos);

	printf("%d,%d,%p", a[pos], pos, add);
}
