#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int n;
int cost[1001][3], dp[1001][3];


int main()
{
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cost[i][0] >> cost[i][1] >> cost[i][2];
    }
    dp[0][0] = cost[0][0];
    dp[0][1] = cost[0][1];
    dp[0][2] = cost[0][2];

    for (int i = 1; i < n; i++) {
        dp[i][0] = cost[i][0] + min(dp[i-1][1], dp[i-1][2]);
        dp[i][1] = cost[i][1] + min(dp[i-1][0], dp[i-1][2]);
        dp[i][2] = cost[i][2] + min(dp[i-1][0], dp[i-1][1]);
    }
    cout << min(dp[n-1][2], min(dp[n-1][0], dp[n-1][1])) << "\n";

    return 0;
}

// 규칙을 만족하면서 모든 집을 칠하는 비용의 최솟값을 구하라.
// 처음과 두번째집은 색이 같지 않아야 함.
// 일반항으로 n번째와 그 앞의 색도 같지 않아야 한다. 그러니 앞뒤의 색은 무조건 달라야 한다.
// n번째까지 집을 색칠해가면 n-1집까지도 최소비용으로 칠해왔을 것임. 그러고 색이 다른 (조건)이 주어지고
// 그 조건하에서 최소 비용을 고르면 된다.

// 직전에 어떤 색을 사용했는지 저장할 변수가 필요하다.
