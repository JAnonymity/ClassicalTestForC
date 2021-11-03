// 求Fibonacci 数列前40 个数，每行输出5 个，将40 个Fibonacci 数输出。

int get_Fibonacci(int n)
{
    if (n==1||n==2)
    {
        return 1;
    }
    return get_Fibonacci(n - 1) + get_Fibonacci(n - 2);
}

void main()
{
    int num = 40;

    for (int i = 1; i <= num; i++)
    {
        printf("%d\t", get_Fibonacci(i));
        if (i % 5 == 0)
        {
            printf("\n");
        }
    }
}
