#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int n, cnt = 0;

    scanf("%d", &n);
    while (n) {
        int tmp = n;
        while (tmp) {
            int val = tmp % 10;
            if (val == 3) cnt++;
            tmp /= 10;
        }
        n--;
    }
    printf("%d", cnt);
    return 0;
}



// 우선 짜보자