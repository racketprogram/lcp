#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2)
{
	double dx = x2 - x1;
	double dy = y2 - y1;
	/* printf("dx is %f\ndy is %f\n", dx, dy); */
	double dsquard = dx * dx + dy * dy;
        double result = sqrt(dsquard);	
	return result;
}

double area(double radius)
{
	return (3.1416 * radius * radius);
}

int main(void)
{
 	double radius = distance(1.0, 2.0, 4.0, 6.0);
	double result = area(radius);       
	printf("distance is %f\n", distance(1.0, 2.0, 4.0, 6.0));
	printf("area is %f\n", result);
	return 0;
} 


