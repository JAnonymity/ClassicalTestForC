#include <stdio.h>

void combineTwoNum(int  num1, int  num2, long  *result)
{
	int onepos,tenpos,hundredpos,thousandpos;
	
	onepos=num2/10%10;
	tenpos=num1/10%10;
	hundredpos=num2%10;
	thousandpos=num1%10;
	
	*result=onepos+tenpos*10+hundredpos*100+thousandpos*1000;
}

void main()
{  
   int num1=0,num2=0,res=0;
   
   scanf("%d,%d",&num1,&num2);
   
   combineTwoNum(num1,num2,&res);
   
   printf("res=%d",res);
}

