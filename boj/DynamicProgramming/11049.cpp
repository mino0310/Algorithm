#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;

}

dp[i][j] = dp[i][k] + dp[k+1][j] + arr[i][0] * arr[k][1] * arr[j][1];
