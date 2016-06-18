#include <stdio.h>
#include <assert.h>

#define LEN 8
int a[LEN] = { 1, 2, 2, 2, 5, 6, 8, 9 };

int is_sorted(void)
{
	int i = 0;
	for (i = 1; i < LEN; i++) {
		if (a[i - 1] > a[i]) {
			return 0;
		}
	}
	return 1;
}

int mustbe(int start, int end, int number)
{
	int i = 0;
	for (i = 0; i < start; i++) {
		if (a[i] == number) {
			return 0;
		}
	}
	for (i = end + 1; i < LEN; i++) {
		if (a[i] == number) {
			return 0;
		}
	}
	return 1;
}

int contains(int number)
{
	int i;
	for (i = 0; i < LEN; i++) {
		if (a[i] == number) {
			return 0;
		}
	}
	return 1;
}

int bsearch(int number)
{
	int mid = 0;
	int start = 0;
	int end = LEN - 1;
	while (start <= end) {
		assert(mustbe(start, end, number));
		mid = (start + end) / 2;
		if (a[mid] < number) {
			start = mid + 1;
		} else if (a[mid] > number) {
			end = mid - 1;
		} else if (a[mid] == number) {
			while (a[mid - 1] == number) {
				mid--;
			}
			return mid;
		}
	}
	return -1;
}

int main(void)
{
	printf("%d \n", bsearch(2));
	return 0;
}
