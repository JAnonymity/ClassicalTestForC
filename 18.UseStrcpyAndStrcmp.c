//编写一个程序，找出3 个字符串中的最大者，将它输出。
void main()
{
    char str1[20];
    char str2[20];
    char str3[20];
    char maxstr[20];
    scanf("%s %s %s", str1, str2, str3);

    if (strcmp(str1,str2)>0)
    {
        strcpy(maxstr, str1);
    }
    else if (strcmp(str2, maxstr) > 0)
    {
        strcpy(maxstr, str2);
    }
    else if (strcmp(str3, maxstr) > 0)
    {
        strcpy(maxstr, str3);
    }

    printf("%s", maxstr);
}
