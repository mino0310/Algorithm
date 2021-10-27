#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n+1), dp(n+1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    dp[1] = 1;
    
    for (int i = 2; i <= n; i++){
        int max_val = 0;
        for (int j = i; j >= 1; j--) {
            if (arr[i] > arr[j] && dp[j] > max_val) {
                // 작은 숫자가 있으면 == 해당 숫자를 끝으로 증가수열이 된다면 
                max_val = dp[j];
            }
        }
        dp[i] = max_val + 1;
    }

    sort(dp.begin(), dp.end());
    cout << dp[n] << endl;

    return 0;

}