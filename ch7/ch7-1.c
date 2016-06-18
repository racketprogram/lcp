#include <stdio.h>

int main(void)
{
	struct complex_struct { double x, y; };
	struct complex_struct z = { .x = 3.0 };
	z.y = -4.0;
	if (z.y < 0) {
		printf("z=%f%fi\n", z.x, z.y);
	} else {
		printf("z=%f+%fi\n", z.x, z.y);
	}
	return 0;
}
