#include <stdio.h>

int fact(int n)
{
	int result = 1;
	while (n > 0) {
		result = result * n;
		n = n - 1;
	}
	return result;
}

int main(void)
{
	int result = fact(10);
	printf("fact 10 is %d\n", result);
	
	return 0;
}
