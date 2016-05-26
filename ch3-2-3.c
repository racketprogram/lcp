#include <stdio.h>

void threeline(void);

int main(void)
{
	printf("First line\n");
	newline();
	printf("Second line\n");
	threeline();
	return 0;
}
	
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
