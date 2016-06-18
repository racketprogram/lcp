#include <stdoi.h>
#define N 3

int a[N];

void gen_random(void)
{
        int i = 0;
        for (i = 0; i < N; i++) {
                a[i] = i + 1;
        }
}

void print(void)
{
	gen_random();
	int i = 0;
	int j = 0;	
	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
		for (j = i + 1; i < N; i++) {
			
