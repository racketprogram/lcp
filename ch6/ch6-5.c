#include <stdio.h>

int main(void)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 100; i++) {
		for (j = 2; j < i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (j == i) {
			printf("%d ", i);
		}
	}
	printf("\n");
	return 0;
}
