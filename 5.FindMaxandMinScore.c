#include<stdio.h>

//5.输入若干学生的一门课成绩，统计并输出最高成绩和最低成绩及相应的序号


void Print_ScoreandNumber(double score[],int num)
{
	double max=score[0],max_pos=0,min=score[0],min_pos=0;
	int i=0;
	for(i=0;i<num;i++)
	{
		if(score[i]>max)
		{
			max=score[i];
			max_pos=i;
		}
		else if(score[i]<min)
		{
			min=score[i];
			min_pos=i;
		}
	}
	
	printf("NO.%d is maxscore=%.2lf\n",max_pos,max);
	printf("NO.%d is minscore=%.2lf\n",min_pos,min);
}

void main()
{
	int num=0,i=0;
	double score[100]={0};
	
	printf("Totalnum=");
	scanf("%d",&num);
	
	for(i=0;i<num;i++)
	{
		scanf("%lf",&score[i]);
	}
	
	Print_ScoreandNumber(score,num);
	
}
