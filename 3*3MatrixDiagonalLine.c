#include<stdio.h>

//求一个 3*3 的整型矩阵对角线元素之和
//求一个 3*3 的矩阵各行元素的平均值


void main()
{
	int arr[3][3];
	int sum=0,i,j,k=0,row_sum=0,row_aver=0;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		row_sum=0;
		for(j=0;j<3;j++)
		{
			if(i==j||(i+j)==2)
			{
				sum+=arr[i][j];			
			}
			row_sum+=arr[i][j];
			row_aver=row_sum/3;
		}
		printf("row_aver=%d\n",row_aver);
	}
	
	printf("sum=%d",sum);
}
