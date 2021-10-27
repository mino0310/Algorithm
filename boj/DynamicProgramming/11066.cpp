#include <iostream>
#include <algorithm>

using namespace std;

int sum[501], file[501], dp[501][501];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test_case, n;

    cin >> test_case;
    while (test_case--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            cin >> file[i];
            sum[i] = sum[i - 1] + file[i];
        }

        for (int i = 2; i <= n; ++i) {
            for (int j = i - 1; j > 0; --j)	{
            dp[j][i] = 987654321;
            for (int k = j; k <= i; k++) {
                dp[j][i] = min(dp[j][i], dp[j][k] + dp[k + 1][i]);
            }
            dp[j][i] += sum[i] - sum[j - 1];
            }
        }
        cout << dp[1][n] << endl;   
    }
    return 0;
}
