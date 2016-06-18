#include <stdio.h>

int main(void)
{
	int a = 10;
	int b;

	__asm__("movl %1, %%eax\n\t"
		"movl %%eax, %0\n\t"
		:"=r"(b)
		:"r"(a)
		:"%eax"
		);
	printf("Result: %d, %d\n", a, b);
	return 0;
}
