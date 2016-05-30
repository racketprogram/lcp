#include <stdio.h>

void diamond(int n, char* s)
{	
	int i = 0;
	int j = 0;	
	int k = 0;
	for (i = 1; i <= n; i = i + 2) {	
		for (k = 1; k <= (n - i) / 2; k++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("%s", s);
		}
		printf("\n");
	}
	for (i = n - 2; i > 0; i = i - 2) {
		for (k = 1; k <= (n - i) / 2; k++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("%s", s);
		}
		printf("\n");
	}
}

int main(void)
{
	diamond(13, "X"); 
	return 0;
}
