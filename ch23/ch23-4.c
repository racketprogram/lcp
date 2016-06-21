#include  <stdio.h>

int main(void)
{
	const char c = 'a';
	char * const pc = &c;
	*pc = 'b';

	printf("%c\n", c);
	return 0;
}
