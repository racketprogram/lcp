#include <stdio.h>

int main(void)
{
	int count[4] = { 4, 3, 2, 1 };
	int count2[4] = { 0, 0, 0, 0 };
	int j = 0;
	int i = 0;
   	
	for (j = 0; j < 4; j++) {
		count2[j] = count[j];
	}	

	for (i = 0; i < 4; i++) {
		printf("count[%d] = %d\n", i, count2[i]);
	}
	
	return 0; 
}
