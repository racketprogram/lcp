#include <stdio.h>

int gcd(int a, int b)
{
	if (a % b == 0) {
		return b;
	}
	else {
		return gcd(b, a%b);
	}
}

int main(void)
{
	int x1 = 100;
	int x2 = 40;
	int result = gcd(x1, x2);
	printf("result is %d\n", result);
	
	return 0;
}
