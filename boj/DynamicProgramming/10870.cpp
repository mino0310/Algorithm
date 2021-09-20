#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n;
long long val[91];

long long fibo(int a){
    if (a == 0) {
        return 0;
    }   else if (a == 1) {
        return 1;
    }   else if (val[a]) {
        return val[a];
    }   else {
        return val[a] = fibo(a-2) + fibo(a-1);
    }
}

int main(){

    int i;

    cin >> n;
    // 바텀업
    // val[0] = 0;
    // val[1] = 1;

    // for (i = 2; i <= n; i++){
    //     val[i] = val[i - 2] + val[i - 1];
    // }

    // cout << val[n] << "\n";

    // 탑다운   
    cout << fibo(n) << "\n";

    return 0;
}

// n번째 피보나치를 구하려면 n-2번째, n-1번째의 피보나치 값을 알아야 한다.
// 그 값은 최적 부분 구조들을 이루고 있음. 그리디랑, DP를 사용할 수 있다.
// 같은 연산을 반복할 필요가 없어 시간제한을 통과하기 위해 DP로 푸는 것이 좋음.

// 바텀업과 탑 다운으로 둘 다 풀어보자.

