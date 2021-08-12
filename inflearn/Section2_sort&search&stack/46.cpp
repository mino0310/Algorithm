#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

int main(void)
{
    int n, i, cnt = 0, pos = 0, point, k, sum = 0;

    scanf("%d", &n);
    std::vector<int> queue(n + 1);
    for (i = 1; i <= n; i++) {
        scanf("%d", &queue[i]);
        sum += queue[i];
    }
    scanf("%d", &k);
    if (k >= sum) {
        printf("%d", -1);
        return 0;
    }
    while (1)
    {
        pos++;
        if (pos > n) pos = 1;
        if (queue[pos] != 0) {
            queue[pos]--;
            cnt++;
        }
        if (cnt == k) {
            break ;
        }
    }

    while (1) {
        pos++;
        if (pos > n) pos = 1;
        if (queue[pos]) {
            printf("%d", pos);
            break ;
        }
    }
    return 0;
}