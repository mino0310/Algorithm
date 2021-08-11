#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>

int make_cnt(int line[], int stall_num, int horse_num, int res);
int main(void)
{
    int mid, i, j, lt = 1, rt, res, cnt = 0, stall_num, horse_num, tmp;

    scanf("%d %d", &stall_num, &horse_num);
    int *p = new int[stall_num + 1];
    
    for (i = 1; i <= stall_num; i++) {
        scanf("%d", &p[i]);
    }
    std::sort(p + 1, p + stall_num + 1);

    rt = p[stall_num];

    while (lt <= rt) {
        mid = (lt + rt) / 2;
        if (make_cnt(p, stall_num, horse_num, mid) >= horse_num) {
            res = mid;
            lt = mid + 1;
        }
        else {
            rt = mid - 1;
        }
    }
    printf("%d", res);
    delete[] p;
    return 0;
}


int make_cnt(int line[], int stall_num, int horse_num, int res) {
    int cnt = 1, pos = 1, i;

    i = 2; 
    while (i < stall_num) {
        if ((line[i] - line[pos]) >= res) {
            pos = i;
            cnt++;
        }
        i++;
    }
    return cnt;    
}

/*
사고를 약간 반대로 해보면 되네 .
세 개를 뽑아서 두 말의 거리를 측정한다는 식으로 문제에 접근하지 말고

가장 가까운 두 말의 거리의 최대값을 결정해두고 다른 말들을 이 거리 이상으로 배치하는 것이 가능한지를 알아보는 식으로 
문제에 접근하는 것이 낫다.

두 말의 거리가 최대가 되는 값을 찾는 문제.
가장 가까운 말들의 거리를 정해놓고 그것보다는 다 멀리 있도록 말을 배치하는 것.

그 값은 0부터 제일 큰 좌표값 사이에 있음.

그리고 가운데 값이 답이 되는지 체크해보면 됨. 가운데 값은 1 + 9 를 2로 나눈 5.

입력값으로 5 3 이라 했을 때 위에서 도출한 5( (1+9)/2) 는 무슨 의미냐?

3마리의 말을 배치했을 때 가장 가까운 두 말 사이의 거리를 뜻하는 것. 
다른 말들은 5 이상의 거리로 배치해야 하는 것.

우선 수직선 1에 첫번째 말을 두고 5이상의 거리가 되는 지점을 찾는다. 
그 후 그 지점에서 다시 5이상의 거리가 되는 지점을 찾아본다. 

이렇게 했을 때 배치가 다 이루어지면 그보다 큰 값도 배치가 된다는 것이니 5보다 큰 범위에서 이분탐색으로 값을 찾아봐야 한다.
배치가 이뤄지지 않으면 작은 값도 된다는 이야기니 그 값보다 아래의 범위를 다시 이분탐색으로 찾아봐야 한다.

지금은 문제 해석 및 추상화 능력보다 코드화 능력이 더 떨어지므로 이를 집중적으로 훈련해야겠다.
*/

