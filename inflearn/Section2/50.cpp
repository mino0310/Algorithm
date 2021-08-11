#include <stdio.h>
#include <iostream>

int make_sum(int now_row, int now_col, int end_row, int end_col);

int land[51][51];

int main(void)
{
	int row, col, i, j, selected_row, selected_col, sum = 0, max = 0, last_sum =0;

	std::cin >> row >> col;

	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			std::cin >> land[i][j];
		}
	}
	std::cin >> selected_row >> selected_col;

	for (i = 0; i < row - selected_row; i++) {
		for (j = 0; j < col - selected_col; j++) {
			sum = make_sum(i, j, i+selected_row, j+selected_col);
			if (sum >= max) {
				max = sum;
			}
		}
	}
	printf("%d", max);
	return 0;
}

int make_sum(int now_row, int now_col, int end_row, int end_col) {
	int i, j, sum = 0;

	for (i = now_row; i < end_row; i++) {
		for (j = now_col; j < end_col; j++) {
			sum += land[i][j];
		} 
	}
	return (sum);
}