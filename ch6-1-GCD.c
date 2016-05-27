#include <stdio.h>

int gcd(int a, int b)
{
	int swp = 0;
	while (a % b != 0) {
		swp = a;
		a = b;
		b = swp % b;
	}
	return b;
}

int main(void)
{
	int result = gcd(100, 40);
	printf("gcd 100 40 is %d\n", result);
	
	return 0;
}
		
