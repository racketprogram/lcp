#include <stdio.h>

int countbit(unsigned int x)
{
	int i = 0;
	int result = 0;
	unsigned int y = 0;
	for (i = 0; i < 32; i++) {
		y = (x >> i) & 0x00000001;
		if (y == 0x00000001) {
			result++;
		}
	}
	return result;
}

int main(void)
{
	int a = countbit(0x0000000f);
	printf("%d\n", a);
	return 0;
}
