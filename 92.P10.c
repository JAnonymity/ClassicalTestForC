#include<math.h>

double get_InferiorSum(int num,double x)
{
	double sum = 0.0, term = 0.0, p = 1.0;
	for (int i = 1; i <= num; i++)
	{
		p *= i;
		term = pow(x,i)/p;
		sum += term;
	}

	return sum;
}

void main()
{
	int num;
	double x;
	double res;
	scanf_s("%d,%lf", &num, &x);

	res = get_InferiorSum(num, x);

	printf("res=%lf", res);
}
