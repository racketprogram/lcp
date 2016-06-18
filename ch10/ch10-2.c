#include <stdio.h>

int main(void)
{
	long sum = 0;
	int i = 0;
	char input[5];

	while (1) {
		sum = 0; 
		scanf("%s", input);
		for (i = 0; input[i] != '\0'; i++) {
			if (input[i] < '0' || input[i] > '9') {
				printf("Invalid\n");
				sum = -1;
				break;
			}
			sum = sum * 10 + input[i] - '0';
		}
		printf("input=%ld\n", sum);
	}
	return 0;
}
