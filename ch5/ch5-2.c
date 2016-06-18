#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	return (sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2))));
}

double area(double d)
{
	return (3.1416 * d * d);
}

int main(void)
{
	double x1 = 1.0;
	double y1 = 1.0;
	double x2 = 2.0;
	double y2 = 2.0;
	double d = distance(x1, y1, x2, y2);
	double a = area(d);
	printf("distance is %f\narea is %f\n", d, a);
	return 0;
}
