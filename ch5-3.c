#include <stdio.h>

int factorial(int n)
{
	if (n == 0) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main(void)
{
	int n = 3;
	int result = factorial(n);
	printf("%d\n", result);
	return 0;
}
	
