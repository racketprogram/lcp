#include <stdio.h>

int increment(int x)
{
	return x = x + 1;
}

int main(void)
{
	int i = 1;
	int j = 2;
	printf("%d\n%d\n", increment(i), increment(j));
}
