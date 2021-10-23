//10.求下列式子的值：1-1/2+1/3-1/4+……+1/99-1/100，将结果输出。
void main()
{
    double sum = 0,tempres=0,sign=1;
    for (int  i= 1; i <= 100; i++)
    {
        tempres = sign / i;        
        sum += tempres;        
        sign = -sign;
    }

    printf("1-1/2+1/3-1/4+……+1/99-1/100=%lf\n",sum);
}
