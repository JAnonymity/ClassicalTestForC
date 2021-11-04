#define NUM 100

//百元买百鸡问题:公鸡每只5元,母鸡每只3元,小鸡3只一元,问一百元买一百只鸡有几种买法。
void main()
{
    int rooster = 0, hen = 0, chicken = 0, count = 0;
    int rooster_price = 5, hen_price = 3;

    for (rooster = 0; rooster <= NUM/5; rooster++)
    {
        for (hen = 0; hen <= NUM/3; hen++)
        {
            for (chicken = 0; chicken <= NUM; chicken++)
            {
                if (((rooster * rooster_price + hen * hen_price + chicken / 3.0 * 1) == 100)&&(rooster+hen+chicken==100))
                {
                    printf("rooster=%d\then=%d\tchicken=%d\n", rooster, hen, chicken);
                    count++;
                }
            }
        }
    }
    printf("count=%d\n", count);
}
