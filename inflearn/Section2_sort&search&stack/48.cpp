#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

int arr[9][9];
int arr_avg[9];

int main(void)
{
    int i, j, avg, res = 0, sum, min_idx, min = INT_MAX;

    for (i = 0; i < 9; i++){
        sum = 0;
        for (j = 0; j < 9; j++) {
            std::cin >> arr[i][j];
            sum += arr[i][j];
        }
        arr_avg[i] = round(sum / 9.0);
    }
    for (i = 0; i < 9; i++) {
        min = INT_MAX;
        res = 0;
        for (j = 0; j < 9; j++) {
            if (fabs(arr[i][j] - arr_avg[i]) < min) {
                res = arr[i][j];
                min = fabs(arr[i][j] - arr_avg[i]);
            }
            else if (fabs(arr[i][j] - arr_avg[i]) == min) {
                res = res > arr[i][j] ? res : arr[i][j];
            }
        }
        std::cout << arr_avg[i] << " " << res << std::endl;
    }
    return 0;
}