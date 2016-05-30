#include <stdio.h>

int num9(void)
{
	int n = 0;
	while (n != 101) {
		if (n % 10 == 9) {
			printf("%d\n", n);
			n = n + 1;
		} else {
			n = n + 1;
		}
	}
	return 0;
}	

int main(void)
{
	num9();
	return 0;
}	
