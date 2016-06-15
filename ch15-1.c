#include <stdio.h>

int main(void)
{
	short s = 32767.4;
	printf("%d\n", s);
	printf("%d\n", 2147483648);
	printf("%f\n", (double)3 + 3);
	printf("%d\n", '3' + '3');
	return 0;
}
