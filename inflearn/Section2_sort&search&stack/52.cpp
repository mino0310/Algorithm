#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>

int my_min(int a, int b, int c);

using namespace std;

int arr[1501];

int main(void)
{
    int n, i, p2, p3, p5, min = 0, min_idx = 0;
    p2 = p3 = p5 = 1;
    arr[1] = 1;
    cin >> n;

    for (i = 2; i <= n; i++) {
        
        min = my_min(arr[p2]*2, arr[p3]*3, arr[p5]*5);
        if (arr[p2]*2 == min) p2++;
        if (arr[p3]*3 == min) p3++;
        if (arr[p5]*5 == min) p5++;
        arr[i] = min;
    }
    cout << arr[n] << endl;
    return 0;
}

int my_min(int a, int b, int c) {
    if(a > b) {
        if (b > c) {
            return c;
        }
        else return b;
    }
    else {
        if (a > c) {
            return c;
        }
        else
            return a;
    }
}
/*
1 2 3 4 5 6 8 9 10 12 15 
1 2 3 2*2 5 2*3 2*4 3*3 2*5 3*2*2 3*5 2*2*2*2

2 3 5 뢰 되어있는 배열이라는 건
2 3 5를 곱햏서 만들 수 있다는 말
어떤 규칙성을 가지지?
1 은 제외
2 - 1*2     
3 - 1*3     
4 - 2*2     
5 - 1*5     
6 - 2*3     
8 - 2*2*2   
9 - 3*3     
10 - 2 * 5
12 - 2*2*3
15 - 3*5




*/

/* 
소인수 분해의 결과는 무엇을 의미하지? 소수의 곱으로 나타낸 것이지. 

숫자가 들어오면 
해당 번째의 어글리 넘버를 출력해주면 됨 간단함

이 문제의 핵심은 무엇인가


소수로 나눠져야하고 && 그 소수 값이 2, 3, 5 여야만 한다.
2, 3, 5가 주어졌으니 굳이 소수 판별을 할 필요 없고, 2, 3, 5로 나누어 떨어지지 않을 때까지 나누면 된다.

1) 소인수 분해하는 함수
2) 해당 숫자의 소인수가 2,3,5 만 있는지 체크하는 함수
여기까지가 어글리 넘버를 판별하는 과정

이후에
N번째 어글리 넘버를 구하는 과정은 어떻지?
1) 1부터 숫자를 증가시키면서 어글리 넘버인지 판별하기 && 그럴 때마다 카운트도 증가
그러다 카운트가 N이 되면 현재 숫자를 출력한다. 



*/