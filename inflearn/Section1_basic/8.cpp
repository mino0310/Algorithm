#include <iostream>
#include <stdio.h>

int main(void) {
    char input[51];
    int right = 0, i = 0, left_cnt = 0, right_cnt = 0;

    scanf("%s", input);

    for (i = 0; input[i]; i++) {
        if (input[i] == '(') {
            left_cnt++;
        }
        else if (input[i] == ')') {
            right_cnt++;
            if ((left_cnt - right_cnt) >= 0) {
                right = 1;
            }
        }
    }
    if (left_cnt != right_cnt) {
        right = 0;
    }

    if (right == 1) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    return 0;
}