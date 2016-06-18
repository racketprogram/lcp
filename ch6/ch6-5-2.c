#include <stdio.h>

int main(void)
{
	int i = 1;
	int j = 1;
	int result = 0;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			result = i * j;
			printf("%d ", result);
		}
	printf("\n");
	}
	printf("\n");
	return 0;
}
