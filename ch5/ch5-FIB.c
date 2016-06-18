#include <stdio.h>

int fib(int n)
{
	if (n == 0) {
		return 1;
	}
	else if (n == 1) {
		return 1;
	}
	else {
		return fib(n - 2) + fib(n - 1);
	}
}

int main(void)
{
	int num = 30;
	int result = fib(num);
	printf("fib %d is %d.\n", num, result);
	
	return 0;
}
