#include <iostream>
#include <algorithm>

using namespace std;

int arr[301], dp[301][3];

int main() {
    int n;
    
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    dp[0] = 0;
    dp[1] = arr[1];
    dp[2] = dp[1] + arr[2];

    
    // 즉, 3번째부터는 연속이 될 가능성이 있으니까, 이를 고려해줘야 한다. 
    // 그러면 1 2 3 4 있으면
    // 4번째까지의 최대값을 판별할 대상은
    // 1 2 4
    // 1 3 4
    // 2 4
    // 지. 2칸 전으로 가서 그 앞 것이랑 더하거나
    // 2칸 앞으로 가서 그냥 더하고 끝
    
    
    for (int i = 3; i <= n; i++){
        dp[i] = max(dp[i-1] + arr[i], dp[i-2] + arr[i]);
        cout << "dp[" << i << "] = " << dp[i] << "\n";
    }

    // 2개 전 = 이 역시 최대값임
    // 1개 전 = 이 역시 최대값임
    
    // 여기서 연속을 고려해야 하는 건 1개전의 값에 지금을 더하는 경우임.
    // 1개전일 때는 연속을 하지 않아야 함. 


    cout << dp[n] << "\n";

    return 0;
}
