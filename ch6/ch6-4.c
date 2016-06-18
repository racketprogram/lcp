#include <stdio.h>

int is_prime(int n)
{
	int i = 0;
	for (i = 2; i < n; i++)
		if (n % i == 0) {
			break;
		}
	
	if (i == n) {
		return 1;
	} else {
		return 0;
	}
}
                                                                               
int main(void)
{
	int i = 0;
	int j = 0;
	for (i = 1; i <= 100; i++) {
		j = is_prime(i);
		if (j == 1) {
			printf("%d ", i);
		} else {
		
		}
	}

	printf("\n");
	return 0;
}		


                                                                               



