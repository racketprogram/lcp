#include <stdio.h>

void print_parity(int x)
{
	if (x % 2 == 0)
	{	
		printf("x is even\n");
	}
	else 
	{	
		printf("x is odd\n");
	}
}

int main(void)
{
	print_parity(21);
	return 0;
}
