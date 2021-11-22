//一个球从100m高度自由落下, 每次落地后反跳回原高度的一半, 再落下, 再反弹。
//求它在第10次落地时, 共经过多少米, 第10次反弹多高。
void main()
{
	double height = 100, distance = 0;

	//这样把包括第10次回弹都算了，而它只要求算到落地
	for (int i = 0; i < 10; i++)
	{
		//距离=下落+回弹
		distance += height;
		height /= 2;
		distance += height;
	}

	//减去第10次回弹的高度
	distance -= height;


	printf("height=%lf,distance=%lf", height, distance);

}
