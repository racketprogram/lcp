#include <stdio.h>
#define MAX_ROW 5
#define MAX_COL 5

int maze[MAX_ROW][MAX_COL] = {
	0, 1, 0, 0, 0,
	0, 0, 0, 1, 0,
	0, 1, 1, 1, 0,
	0, 1, 0, 0, 0, 
	0, 0, 0, 1, 0,
};

void print_maze(void)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < MAX_ROW; i++) {
		for (j = 0; j < MAX_COL; j++) {
			printf("%d ", maze[i][j]);
		}
		putchar('\n');
	}
	printf("*********\n");
}

void go(int row, int col)
{
	maze[row][col] = 2;
	print_maze();		
	if (row == MAX_ROW - 1 && col == MAX_COL - 1) {
		printf("END\n\n\n\n\n");
		return;
	}
	if (col + 1 < MAX_COL && maze[row][col + 1] == 0) {
		go(row, col + 1);
	}
	if (row + 1 < MAX_ROW && maze[row + 1][col] == 0) {
		go(row + 1, col);
	}
	if (col - 1 >= 0 && maze[row][col - 1] == 0) {
		go(row, col - 1);
	}
	if (row - 1 >= 0 && maze[row - 1][col] == 0) {
		go(row - 1, col);
	}
}

int main(void)
{
	go(0, 0);
	return 0;
}












