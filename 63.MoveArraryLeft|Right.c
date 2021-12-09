#include<stdio.h>
#define N 10

//左移
void MoveLeft(int arr[])
{
	int temp=arr[0];
	int i=0;
	
	for(i=0;i<N;i++)
	{
		arr[i]=arr[i+1];
	}
	
	arr[i-1]=temp;
}
//右移
void MoveRight(int arr[])
{
	int temp=arr[N-1];
	int i=0;
	
	for(i=N-1;i>=0;i--)
	{
		arr[i]=arr[i-1];
	}
	
	arr[i+1]=temp;
}

void myprint(int arr[])
{
	int i=0;
	for(i=0;i<N;i++)
	{
		printf("%d\t",arr[i]);
	}
}

void main()
{
	int a[N]={5,78,64,12,35,75,10,9,7,8};
	int b[N]={5,78,64,12,35,75,10,9,7,8};
	
	printf("origin:\n");
	myprint(a);
	
	MoveLeft(a);
	
	printf("\naftermoveleft:\n");
	myprint(a);
	
	MoveRight(b);
	
	printf("\naftermoveright:\n");
	myprint(b);
}
