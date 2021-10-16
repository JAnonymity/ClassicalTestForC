int get_zdgys(int m,int n)
{
    int r;
    if (m<n)
    {
        int t = m;
        m = n;
        n = t;
    }

    r = m % n;
    while (r)
    {
        m = n;
        n = r;
        r = m % n;
    }

    return n;
    
}

int get_zxbgs(int m, int n,int res)
{
    return m * n / res;
}

int main()
{
    int m, n,zdgys,zxgbs;
    scanf_s("%d%d", &m, &n);

    zdgys = get_zdgys(m, n);
    zxgbs = get_zxbgs(m, n,zdgys);

    printf("zdgys=%d,zxgbs=%d\n", zdgys, zxgbs);

    return 0;
}
