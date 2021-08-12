#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int main(void)
{
    int n, i, j, max, max_index, tmp, rank = 0; 
    scanf("%d", &n);

    std::vector<int> input(n);
    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    for (i = 0; i < n; i++) {
        max_index = i;
        max = -2147483648;
        for (j = i; j < n; j++) {
            if (max < input[j]) {
                max_index = j;
                max = input[j];
            }
        }
        tmp = input[i];
        input[i] = input[max_index];
        input[max_index] = tmp;
    }
    for (i = 0; i< n; i++) {

        if (input[i] != input[i + 1]) {
            rank++;
            printf("%d\n", input[i]);
        }
        if (rank == 3) {
            printf("%d", input[i]);
            break ;
        }
    }
    

    return 0;
}

// 문제의 핵심이 뭔지 생각해보자

// 정렬을 하고 3등의 숫자를 출력하는 것이지
// 정렬은 쉽지, 선택정렬을 앞에서 구현한 것을 사용하면 됨.

// 3등은 어떻게 파악하지?

// 우선 내림차순으로 숫자를 정렬하고
// 같은 숫자 한번씩 건너뛰고, 다시 건너뛰고
// 그 다음에 나오는 숫자를 출력하면 될 듯

// 건너뛰는 것은 어떻게 구현하지?
// 넘어갈 때마다 숫자를++ 하고 3이 되는 순간 그 숫자를 출력하게 하자
