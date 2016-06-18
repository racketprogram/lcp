#include <stdio.h> 

double result = 0;

double mypow(double x, int n, double k, int i)
{
	if (n > i * 2) {
		mypow(x, n, k * k, i * 2);
	} else if (n > i) {
		mypow(x, n, k * x, ++i);
	} else {
		result = k;
	}		
}
	
int main(void)
{
	mypow(2.5, 12, 2.5, 1);
	printf("%f\n", result);
	return 0;
}		
