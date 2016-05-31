#include <math.h>
#include <stdio.h>

struct complex_struct {
	double x, y
};

double real_part(struct complex_struct z)
{ 
	return z.x;
}

double image_part(struct complex_struct z)
{
	return z.y;
}

double magnitude(struct complex_struct z)
{
	return sqrt(z.x * z.x + z.y * z.y);
}

double angle(struct complex_struct z)
{
	return atan2(z.y, z.x);
}

struct complex_struct make_from_realimage(double x, double y)
{
	struct complex_struct z = { 0.0, 0.0 };
	z.x = x;
	z.y = y;
	return z;
}

struct complex_struct make_from_magangle(double r, double a)
{
	struct complex_struct z = { 0.0, 0.0 };
	z.x = r * cos(a);
	z.y = r * sin(a);
	return z;
}

struct complex_struct add_complex(struct complex_struct z1, struct 
complex_struct z2)
{
	return make_from_realimage(real_part(z1) + real_part(z2),
				image_part(z1) + image_part(z2));
}

struct complex_struct mul_complex(struct complex_struct z1, struct
complex_struct z2)
{
	return make_from_magangle(magnitude(z1) + magnitude(z2), angle(z1) +
				angle(z2));
}

double printf_complex(struct complex_struct z)
{
	double x = real_part(z);
	double y = image_part(z);
	if (x == 0 && y == 0 ) {
		return 0.0;
	} else if (x == 0) {
		printf("y = %f\n", y);
	} else if (y == 0) {
		printf("x = %f\n", x);
	} else {
		printf("x = %f y = %f\n", x, y);
	}
	return 0.0;
}

int main(void)
{
	struct complex_struct z1 = { 0.0, 2.0 };
	struct complex_struct z2 = { 0.0, 4.0 };
	struct complex_struct z = add_complex(z1, z2);
	printf_complex(z);
	return 0;
} 

