#include<stdio.h>

#define M 3
#define N 4

//求一个m行n列的二维数组中的这样一个元素,它在它所在的行为最大,在它所在的列为最小

void main()
{
	int arr[M][N]={9,6,8,70,10,23,55,66,15,67,4,69};
	int i,j,k;
	int max=0,pos=0;
	
	for(i=0;i<M;i++)
	{
		max=arr[0][0];
		for(j=0;j<N;j++)
		{
			if(arr[i][j]>max)
			{
				max=arr[i][j];
				pos=j;
			}
		}
		
		//因为要判断在列为最小，而在列为最小是要判断M行的 
		for(k=0;k<M;k++)
		{
			if(arr[k][pos]<max)
			{
				break;
			}
		}
		
		if(k==M)
		{
			printf("%d,%d=%d",i,pos,arr[i][pos]);
		}
		
	}
}
