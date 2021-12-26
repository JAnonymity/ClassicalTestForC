#include <conio.h>
#include <stdio.h> 

//从低位开始取出长整型变量s中奇数位上的数，依次构成一个新数放在t中
void fun (long s, long *t)
{
  long sl=10;
  s /= 10;
  /***********SPACE***********/
  *t = s%10;
  while(s>0)
  { 
    /***********SPACE***********/
    s = s/100;
    /***********SPACE***********/
    *t = s%10*sl+*t;
    /***********SPACE***********/
    sl = sl*10;
  }
}

void main()
{ 
	long s, t;
	printf("\nPlease enter s:"); 
	scanf("%ld", &s);
	fun(s, &t);
	printf("The result is: %ld\n", t);
}
