#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int c_cnt = 0, h_cnt = 0, sum, i = 0;
    char *input = malloc(sizeof(char) * 10);
    char *tmp = input;
    scanf("%s", tmp);
    tmp++;
    if (*tmp >= '0' && *tmp <= '9') {
        while (*tmp >= '0' && *tmp <= '9') {
            c_cnt = c_cnt * 10 + (*tmp - '0');
            tmp++;
        }
    } else {
        c_cnt = 1;
    }
    tmp++;
    if (*tmp >= '0' && *tmp <= '9') {
        while (*tmp >= '0' && *tmp <= '9') {
            h_cnt = h_cnt * 10 + (*tmp - '0');
            tmp++;
        }
    } else {
        h_cnt = 1;
    }

    free(input);

    printf("%d", 12 * c_cnt + h_cnt);
    return 0;
}


// sum = 12 * c_cnt + h_cnt;
