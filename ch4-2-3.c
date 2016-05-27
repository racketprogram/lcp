#include  <stdio.h>

int main(void)
{
	int i = 22;
	int j = i % 10;
	int k = i - j;
	printf("%d is %d + %d\n", i, j, k);
	return 0;
}
