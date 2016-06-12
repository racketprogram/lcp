#include <stdio.h>

double sq(double y)
{
	double start = 0.0;
	double mid = 0.0;
	double end = y;
	while (y  != mid * mid) {
		mid = (start + end) / 2;
		if (y > (mid * mid)) {
			start = mid + 0.0001;
		} else {
			end = mid - 0.0001;
		}
		printf("%f\n", mid);
	}
	return mid;
}

int main(void)
{

	printf("%f\n", sq(9.0));
	return 0;
}
