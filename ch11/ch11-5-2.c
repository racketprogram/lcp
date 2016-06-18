#include <stdio.h>
#define LEN 8

int a[LEN] = { 7, 6, 4, 2, 3, 1, 0, 5 };

int partition(int start, int end, int no)
{
	int mid = (start + end) / 2;
	int mid_value = a[mid];
	int left[LEN];
	int right[LEN];
	int i = 0;
        int j = 0;
	int k = 0;
	int mid_back = 0;
	for (i = start; i <= end; i++) {
		if (i == mid) {
			continue;
		} else if (a[i] < mid_value) {
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

	a[i - 1] = mid_value;
	mid_back = i - 1;
	i--;

	while (j > 0) {
		a[i - 1] = left[j - 1];
		j--;
		i--;
	}
	if (mid_back == no) {
		return -1;
	}
	return mid_back;
}

void qsort(int start, int end, int k)
{
	int mid = 0;
	if (start < end) {
		mid = partition(start, end, k);
		if (mid == -1) {
			return;
		}
		qsort(start, mid - 1, k);
		qsort(mid + 1, end, k);
	} else {
		mid = end + 1;
	}
}

int main(void)
{
	qsort(0, LEN-1, 3);
	printf("%d %d %d %d %d %d %d %d\n",
               a[0], a[1], a[2], a[3], a[4], a[5], a[6], a[7]);
	printf("%d\n", a[3]);
	return 0;
}
