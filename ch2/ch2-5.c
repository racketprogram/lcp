#include <stdio.h>

int hour = 3;
int minute = 4;
int total_minute = 0;
int total = 0;

int main(void)
{
	total = total_minute = hour * 60 + minute;
	printf("Total is %d\n", total);
	printf("%d:%d is %d minute after 00:00\n", hour, 
		total_minute = minute, hour * 60 + minute);
	printf("%d and %d hours\n", hour, minute / 60);
	printf("%d and %f hours\n", hour, minute / 60.0);
	return 0;
}
