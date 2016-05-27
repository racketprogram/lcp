#include <math.h>
#include <stdio.h>

double myround(double x)
{
	if (x > 0.0) {
		if (fmod(x, 1) >= 0.5) {
			return (ceil(x));
		} 
		else {
			return (floor(x));
		}
	}
	else {
		if (fmod(x, 1) <= -0.5) {
			return (floor(x));
		}
		else {
			return (ceil(x));
		}
	}
}

void is_leap_year(int year)
{
	if ((year % 4 == 0) && (year % 100 != 0)) {
		printf("%d is special year\n", year);
	}
	else if (year % 400 == 0) {
		printf("%d is special year\n", year);
	}
	else {
		printf("%d is normal year\n", year);
	}
}

int is_even(int x)
{
	return !(x % 2);
}

void print_even(void)
{
	int x = 3;
	if (is_even(x)) {
		printf("%d is even.\n", x);
	}
	else {
		printf("%d is odd.\n", x);
	}
}



void print_logarithm(double x)
{
	if (x <= 0.0) {
		printf("Positive numbers only, please.\n");
		return;
	}
	printf("The log of x is %f\n", log(x));
}

int main(void)
{
        double x = -5.6;
	double y = 4.1;
	double x1 = myround(x);
	double y1 = myround(y);
	printf("%f -> %f\n%f -> %f\n", x, x1, y, y1);
	is_leap_year(2016);
	is_leap_year(800);
	is_leap_year(16);
	print_even();
	print_logarithm(2.0);
	return 0;
}
