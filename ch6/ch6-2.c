#include <stdio.h>

int fact(int n)
{
	int result = 1;
	int i = 1;
	do {
		result = result * i;
		i = i + 1;
	} while (i <= n);

	return result;
}

int main(void)
{
    	int r = fact(10);
	printf("%d\n", r);
	return 0;
}
