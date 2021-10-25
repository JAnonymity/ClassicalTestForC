//求 Sn=a+aa+aaa+…+aa…a 之值，n,a 由键盘输入。
//2+22+222+2222+22222
void main()
{
	int a=0,n=0,i=0;
	int temp_sum=0,sum=0;
	
	scanf("%d%d",&a,&n);
	
	for(i=0;i<n;i++)
	{
		temp_sum=temp_sum*10+a;
		sum+=temp_sum;
	}
	
	printf("%d",sum);
	
}
