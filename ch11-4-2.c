#include <stdio.h>
#define LEN 8

int a[LEN] = { 7, 6, 4, 2, 3, 1, 0, 5 };

int partition(int start, int end)
{
	int mid = (end + start + 1) / 2;
	int midv = a[mid];
	int left[LEN];
	int right[LEN];
	int i = 0;
        int j = 0;
	int k = 0;
	int mid2 = 0;
	for (i = start; i <= end; i++) {
		if (i == mid) {
			continue;
		} else if (a[i] < midv) {
			left[j] = a[i];
			j++;
		} else {
			right[k] = a[i];
			k++;
		}
	}
	while (k > 0) {
		a[i - 1] = right[k - 1];
		k--;
		i--;
	}

	a[i - 1] = midv;
	mid2 = i - 1;
	i--;

	while (j > 0) {
		a[i - 1] = left[j - 1];
		j--;
		i--;
	}
	return mid2;
}

void qsort(int start, int end)
{
	int mid = 0;
	if (start < end) {
		mid = partition(start, end);
		qsort(start, mid - 1);
		qsort(mid + 1, end);
	} else {
		mid = end + 1;
	}
}

int main(void)
{
	qsort(0, LEN-1);
	printf("%d %d %d %d %d %d %d %d\n",
               a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
	return 0;
}
