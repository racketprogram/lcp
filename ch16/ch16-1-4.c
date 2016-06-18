#include <stdio.h>

unsigned int rotate_right(unsigned int x, int n)
{
	int i = 0;
	unsigned int y = 0;
	for (i = 0; i < n; i++) {
		y = x & 0x00000001u;
		y = y << 31;
		x = x >> 1;
		x = x + y;
	}
	return x;
}

int main(void)
{
	unsigned int result = rotate_right(0xdeadbeefu, 8);
	printf("%x\n", result);
	return 0;
}
