//公式

void main()
{
	double pi = 0, terms = 1;
	int i = 1, sign = 1;

	while (fabs(terms)>=1e-6)
	{
		pi += terms;
		sign = -sign;
		i += 2;
		terms = 1.0 / i * sign;		
	}

	pi *= 4;

	printf("%lf", pi);
}
