#include<stdio.h>
#define N 7

int search(int arr[],int len,int num)
{
	int i=0;
	for(i=0;i<len;i++)
	{
		if(arr[i]==num)
		{
			return i;
		}
	}
	
	return -1;
}

int BinarySearch(int brr[],int len,int num)
{
	int mid,low,high;
	
	low=0;
	high=len-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		if(brr[mid]==num)
		{
			return mid;
		}
		else if(brr[mid]<num)
		{
			low=mid+1;
		}
		else if(brr[mid]>num)
		{
			high=mid-1;	
		}
	}
	
	return -1;
}

void main()
{
	int arr[N]={5,78,64,12,35,75,10};
	int brr[N]={1,2,3,4,5,6,7};
	int num=0;
	int index=0;	
	int binaryindex=0;
	
	scanf("%d",&num);
	
	index=search(arr,N,num);
	binaryindex=BinarySearch(brr,N,num);
	
	if(index!=-1)
	{
		printf("index is %d\n",index);
		printf("index is %d",binaryindex);
	}
	else
	{
		printf("Not found");
	}
} 
