#include <stdio.h>

double mypow(double x, int n)
{
	double sum = 0;
	int i = 0;
	i = 1;
	sum = x;

	while (n >= i * 2) {
		sum = sum * sum;
		i = i + i;
		printf("round1 %d %f\n", i, sum);
	}
	while (n != i) {
		sum = sum * x;
		i = i + 1;
		printf("round2 %d %f\n", i, sum);
	}
	return sum;
}
	
int main(void)
{
	printf("%f\n", mypow(2.0, 16));
	return 0;
}		
