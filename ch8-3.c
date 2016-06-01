#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int a[N];

void gen_random(int upper_bound)
{
	int i = 0;
	for (i = 0; i < N; i++) {
		a[i] = rand() % upper_bound;
	}
}

int main(void)
{
	int histogram[10] = { 0 };
	int i = 0;
 	int j = 0;
	int k = 0;
	int q = 0;
	gen_random(10);

	for (i = 0; i < N; i++) {
                ++histogram[a[i]];
	}
	for (j = 0; j < 10; j++) {
		printf("%d  %d\n", j, histogram[j]);
	}
	for (q = 0; q < N; q++) {
		for (k = 0; k <= 9; k++) {
			if (histogram[k] != 0) {
				printf("* ");
				--histogram[k];
			} else {
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
