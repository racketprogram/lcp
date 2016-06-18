#include <stdio.h>

int fact(int n)
{
	int result = 1;
	int i = 1;
	for (i = 1; i <= n; i++) 
		result = result * i;
	return result;
}

int main(void) 
{
	int r = fact(10);
	printf("%d\n", r);
	return 0;
}
