#include <stdio.h>

void newline(void) 
{
	printf("\n");
}

void threeline(void)
{
	newline();
	newline();
	newline();
}

int main(void)
{
	printf("First line\n");
	newline();
	printf("Second line\n");
	threeline();
	return 0;
}	
