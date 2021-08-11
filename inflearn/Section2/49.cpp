#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>   

int map[11][11], arr_x[11], arr_y[11];

int main(void)
{
    int n, i, j, sum = 0;

    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> arr_x[i];
    }
    for (i = n - 1; i >= 0; i--) {
        std::cin >> arr_y[i];
    }

    for (i = 0 ; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr_y[i] > arr_x[j]) {
                map[i][j] = arr_x[j];
            }
            else{
                map[i][j] = arr_y[i];
            }
        }
    }
    for (i = 0 ; i <n; i++) {
        for (j = 0; j < n; j++) {
            sum += map[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}