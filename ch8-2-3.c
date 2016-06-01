#include <stdio.h>
#include <stdlib.h>
#define N 100000

int a[N];

void gen_random(int upper_bound)
{
	int i = 0;
	for (i = 0; i < N; i++) {
		a[i] = rand() % upper_bound;
	}
}

int howmany(int value)
{
	int count = 0;
	int i = 0;
	for (i = 0; i < N; i++) {
		if (a[i] == value) {
			count = count + 1;
		}
	}
	return count;
}


int main(void)
{
	int i = 0;
	gen_random(10);

	for (i = 0; i < 10; i++) {
		printf("%d  %d\n", i, howmany(i));
	}

	return 0;
}
