#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int i, j, tmp, n;
    scanf("%d", &n);
    std::vector<int> input(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (input[j] > input[j + 1]) {
                tmp = input[j];
                input[j] = input[j + 1];
                input[j + 1] = tmp;
            }
        }
    }

    for (i = 0; i < n; i++) {
        printf("%d ", input[i]);
    }
    return 0;
}