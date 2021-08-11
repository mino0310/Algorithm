#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int n, cnt = 0, digit = 1, curr, lt = 1, rt;

    scanf("%d", &n);
    
    while (!lt) {
// 숫자는 비교 기준으로 쓸모가 있으니까 굳이 변경시키지 말고 반복기준 새로잡자

        lt = n / (digit * 10);
        curr = (n / digit) % 10;
        rt = n % digit;

        if (curr > 3) {
            cnt += ()
        }

        digit *= 10;
        n /= 10;
    }
    return 0;
}
