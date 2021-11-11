//有5个国家名，编程实现按字母先后顺序排序，然后分别输出原数组和排序之后的数组。

void sort_strings(char* countries[5])
{
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(countries[i], countries[i + 1])>0)
		{
			char t[30];
			strcpy(t, countries[i]);
			strcpy(countries[i], countries[i+1]);
			strcpy(countries[i + 1],t);
		}
	}
}

void print_strings(char* countries[5])
{
	for (int i = 0; i < 5; i++)
	{
		puts(countries[i]);
	}
}

void main() 
{
	char* countries[5] = {"China","Russia","America","Africa","Korea"};

	print_strings(countries);

	sort_strings(countries);

	print_strings(countries);
}
