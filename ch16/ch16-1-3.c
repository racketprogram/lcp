#include <stdio.h>

unsigned int multiply(unsigned int x, unsigned int y)
{
	unsigned sum = 0;
	if (y == 0) {
		return y;
	} else {
		sum = x;
		while (y != 1) {
			x = x << 1;
			if ((y & 0x00000002) == 0x00000002) {
				sum = sum + x;
			}
			y = y >> 1;
		}
		return sum;
	}
}

int main(void)
{
	unsigned int s = multiply(0x00000004, 0x00000005);
	printf("%d\n", s);
	return 0;
}
			
			
		
