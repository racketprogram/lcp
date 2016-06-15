#include <stdio.h>

int multiply(int x, int y)
{
	if (y == 0) {
		return y;
	} else {
		while (y != 1) {
			x << 1;
			y >> 1;
		}
		return x;
	}
}

int main(void)
{
	int s = multiply(0x00000003, 0x00000002);
	printf("%x\n", s);
	return 0;
}
			
			
		
