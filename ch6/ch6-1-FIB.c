#include <stdio.h>

int fib(int n)
{
	int result = 1;
	int f1 = 0;
	int f0 = 0;
	int num = 0;
	if (n == 1 || n == 0) {
		result = 1;
	} else {
		while (num != n) {
			f0 = f1;
			f1 = result;
			result = f1 + f0;
			num = num + 1;
		}
	}
	return result;	
}

int main(void)
{
	int r = fib(10);
	printf("%d\n", r);
	return 0;
}	
