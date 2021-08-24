#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;
//가장 작은 단위인 3으로 5000을 나눠도 2000을 넘지 않으므로 최대값을 2000으로 설정
#define MAX 2000
int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    // 주머니를 사용해서 만들 수 있는 각 무게 당 최소 개수 벡터
    vector<int> dp(n+1, MAX); 

    // 3으로 만들 수 있는 최소 주머니 개수 1
    dp[3] = 1; 
    // 5로 만들 수 있는 최소 주머니 개수 1
    dp[5] = 1;

    // dp의 bottom - up 방식으로 i (무게)를 만들 수 있는 최소 주머니 개수를 벡터에 저장(메모이제이션)
    for(int i = 6; i <= n; i++) {
        dp[i] = min(dp[i-5]+1, dp[i-3]+1);
    }

    // 3이나 5로 만들 수 없는 값의 경우엔 기존 최소 개수 값들 중 작은 것 + 1로 되는데 이 경우엔 
    // 기존의 dp 가 문제가 없으나, 6 미만의 경우엔 이미 MAX로 초기화 되어 있어 비교시에 등호를 넣어주지 않으면 오류

    if(dp[n] >= MAX)
        cout << "-1\n";
    else
        cout << dp[n] << '\n';
}

