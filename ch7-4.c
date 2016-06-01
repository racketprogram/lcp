#include <stdio.h>

struct complex_struct {
	int x;
	int y;
};

struct segment {
	struct complex_struct start;
};

int main(void)
{

	struct segment s = { { 1, 2 } };

	struct segment s1 = { 1, 2 };

	struct segment s2 = { .start.y = 1 };

	int r = s2.start.y;
	printf("%d\n", r);
	return 0;
}
