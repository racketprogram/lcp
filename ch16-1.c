#include <stdio.h>

int main(void)
{
	int i = 0xcffffff3;
	printf("%x %d\n", 0xcffffff3>>2, 0xcffffff3>>2);
	printf("%x %d\n", i>>2, i>>2);
	return 0;
}
