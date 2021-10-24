//打印出100～999 之间的所有水仙花数。
#include<math.h>
void main()
{
    for (int i = 100; i < 999; i++)
    {
        int ge = i % 10;
        int shi = i / 10 % 10;
        int bai = i / 100;

        if ((pow(ge, 3) + pow(shi, 3) + pow(bai, 3))==i)
        {
            printf("%d\t", i);
        }
    }
}
