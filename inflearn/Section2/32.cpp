#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int n, i, j, min, min_index;

    scanf("%d", &n);
    std::vector<int> input(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }
    
    for (i = 0; i < n; i++) {
        min_index = i;
        min = 2147483647;
        for (j = i; j < n; j++) {
            if (min > input[j]) {
                min = input[j];
                min_index = j;
            }
        }
        int tmp = input[i];
        input[i] = input[min_index];
        input[min_index] = tmp;
    }
    for (i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }
    return 0;
}