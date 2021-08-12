#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int i, j, k, n, m, first_arr[101] = {0, }, second_arr[101] = {0, }, output_arr[201] = {0, };

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &first_arr[i]);
    }
    scanf("%d", &m);
    for (i = 1; i <= m; i++) {
        scanf("%d", &second_arr[i]);
    }
    i = j = k = 1;
    while (1) {
        if (first_arr[i] >= second_arr[j]) {
            output_arr[k++] = second_arr[j++];
        }
        else if (first_arr[i] < second_arr[j]){
            output_arr[k++] = first_arr[i++];
        }
        if (first_arr[i] == 0) {
            while (second_arr[j]) {
                output_arr[k++] = second_arr[j++];
            }
            break ;
        }
        else if (second_arr[j] == 0) {
            while (first_arr[i]) {
                output_arr[k++] = first_arr[i++];
            }
            break ;
        }
    }
    for (i = 1; i < k; i++) {
        printf("%d ", output_arr[i]);
    }
    return 0;
}