#include <stdio.h>

#define LEN 8
int a[LEN] = { 1, 2, 2, 2, 5, 6, 8, 9};

int binarysearch(int start, int end, int find_num)
{
	int mid = (start + end) / 2;
	if (a[mid] == find_num) {
		return mid;
	} else if (a[mid] < find_num) {
		start = mid + 1;
		binarysearch(start, end, find_num);
	} else {
		end = mid - 1;
		binarysearch(start, end, find_num);
	}
}

int main(void)
{
	int result = binarysearch(0, LEN - 1, 1);
	printf("%d %d\n", result + 1, a[result]);
	return 0;
}
