#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>


int main(void)
{
    int n, i, j, tmp, inversion_seq[101] = {0, }, initial_seq[101] = {0, };

    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &inversion_seq[i]);
    }

    for (i = n; i >= 1; i--) {
        tmp = i;
        for (j = i; j < inversion_seq[i] + i; j++) {
            if (tmp < initial_seq[j + 1]) {
                initial_seq[j] = initial_seq[j + 1];
            }
        }
        initial_seq[j] = tmp;
    }

    for (i = 1; i <= n; i++) {
        printf("%d ", initial_seq[i]);
    } 
    return 0;
}