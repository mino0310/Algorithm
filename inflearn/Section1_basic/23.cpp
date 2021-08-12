#include <stdio.h>
#include <iostream>

int main(void)
{
    int num, max = 0, before = 0, after, cnt = 0;

    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        scanf("%d", &after);
        if (after >= before) {
            cnt++;
            if (cnt > max) max = cnt;
        }
        else cnt = 1;
        before = after;
    }
    printf("%d", max);
    return 0;
}