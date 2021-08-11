#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(void) {
    char input[51], output[11];
    int i = 0, j = 0, ret = 0;

    scanf("%s", input);

    while (input[i]) {
        if (input[i] >= '0' && input[i] <= '9') {
            ret = ret * 10 + (input[i] - '0');
        }
        i++;
    }
    // printf("%d\n", ret);
    int cnt = 0;
    for (int i = 1; i <= ret; i++) {
        if (ret % i == 0) {
            cnt++;
        }
    }
    printf("%d\n%d", ret, cnt);
    return 0;
}