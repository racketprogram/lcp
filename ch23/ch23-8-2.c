#include <stdio.h>

int main(void)
{
	int a = 1;
	long int *ap = &a;
	int *ap2 = &a;
	char *ap3 = &a;
	printf("%ld\n", ap);
	printf("%d\n", ap2);
	printf("%s\n", ap3);
	return 0;
}
