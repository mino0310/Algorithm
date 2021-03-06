#include <iostream>
#include <algorithm>

using namespace std;
int input[101][2];
int dp[101][100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int num, total_kg, w, v;

    cin >> num >> total_kg;

    // 각 무게와 가치를 입력받는다.
    for (int i = 1; i <= num; i++){
        cin >> input[i][0] >> input[i][1];
    }

    // 고려해야 할 것은 몇 번째까지인지와 거기까지의 무게의 합이다.
    
    // 각 무게와 가치의 값들을 반복한다.
    for (int i = 1; i <= num; i++){
        // 무게의 합을 j라 하고, 그 값이 주어진 total_kg 이 될 때까지 반복한다.
        // 즉, i번까지의 배당을 훑었을 때의 무게의 합이 j인 경우를 검사한다. 
        // 여기서 매번 무게의 합을 변수에 저장하자면 경우의 수가 많아지니 
        // 무게를 1부터 시작해서 초과하지 않을 때까지 반복한다. 
        for (int j = 1; j <= total_kg; j++){
            // j 에서 검사하는 배낭의 무게를 뺀다. 이 값이 0보다 큰지 비교한다.
            // 이 값이 0보다 크다는 이야기는, i번째까지 배낭을 검사해서 무게가 j보다 작은 배낭이 있다는 말이다.
            // 그러므로 주어진 총 무게보다 적은 무게의 배낭이 있다는 이야기고, 이 배낭의 가치는 사용할 수 있다.
            if (j - input[i][0] >= 0)
            // 해당 배낭의 가치를 사용할 수 있다는 말이므로 이를 쓴다. 
            // dp[i][j] 는 dp에 사용하는 배열로, i번째까지 배낭을 훑었을 때 무게의 합이 j가 될 때의 가치의 최대값을 말한다.
            // i번째 배낭의 가치를 사용할 수 있게 되었으니, 이를 사용해서 dp 배열을 갱신해야 한다.
            // dp[i - 1][j] 는 i - 1번째, 즉, 직전 배낭까지 검사해서 무게의 합이 j가 된 경우의 가치의 최대값이다. 
            // dp[i - 1][j - input[i][0]] + input[i][1] 은 i - 1번째 , 즉 직전 배낭까지 검사해서 무게의 합이 j에서 현재의 배낭의 무게를 뺀 것의 가치의 최대값에서 현 배낭의 가치를 더한 값이다.
            // 현재는 i번째 배낭까지 검사해서 무게가 j가 된 경우다. 
            // 전자는 직전배낭까지 검사해서 무게가 j가 된 경우이므로, 현재의 배낭을 검사하지 않고, 무게가 j가 되었으니 가치의 최대값을 비교할 필요가 있다.
            // 후자는 직전배낭까지 검사하고 무게가 현재 배낭을 뺀 것의 가치의 최대값이다. 이는 현재의 물품을 배낭에 넣기 전의 가치의 최대값을 말한다. 
            // 두 값 중 큰 값을 dp[i][j] 에 저장한다.
                dp[i][j] = max(dp[i-1][j], dp[i-1][j - input[i][0]] + input[i][1]);
            else
            // 해당 배낭의 가치를 이용할 수 없다는 것이므로, 직전 배낭까지 계산해서 무게의 합이 j인 것의 가치의 최대값을 중복해서 사용한다.
                dp[i][j] = dp[i - 1][j];
        }
    }
    // dp[num][total_kg] 에는 어떤 값이 담기나?
    // num 개의 배낭을 탐색해서 무게가 total_kg이 되는 때 가치의 최대값을 말한다. 
    // 무게가 정확히 total_kg이 안되더라도 앞에서 누적해온 최대값을 누적해왔을 것이므로 이 값을 출력하면 문제에서 요구하는 답을 구할 수 있다,.

    cout << dp[num][total_kg] << "\n";

    return 0;
}

// 배낭에 넣을 수 있는 가치의 최대값을 구하는 문제.

// 완전 탐색으로 풀기엔 시간 초과가 된다. 너무 많은 경우를 고려해야 하기 때문.
// 그러니까 DP 를 사용해서 푸는 것이 나을 듯
// 문제를 쪼개보자.

// 하나가 들어오면
// 그게 무게 내라면 그 가치가 최대값임

// 두개가 들어오면
// 일단 첫번째거가 무게 범위 안이라면 그 가치가 최대값이 됨.
// 그 다음에, 2번째가 무게 범위 안이라면 그 가치를 더해서 최대값으로 설정
// 만약에 2번째가 무게 범위 밖이라면 1번과 2번의 가치를 비교해서 더 큰 것을 남기고 작은 것을 빼야 한다.

// 4 7 
// 6 13
// 4 8 
// 3 6 
// 5 12
// 처음 들어왔을 떄, dp[1] = 13.
// 두번째 들어왔을 때, dp[2] = ? 무게가 초과하는데.. 
// 그러면 일단 무게를 초기화하고 8을 넣는다. dp[2] = 8;
// 세번째 들어왔을 때 dp[3] = ? 무게가 이미 초과됨.

// 네번째 들어왔을 때 dp[4] = ? 무게가 이미 초과됨. 

// 각 번째 배낭의 최대 값을 저장해두고 그 값 중에서 최대값을 출력하면 되지 않나.

// 그러면 각 번째 배낭의 최대값을 어떻게 구하냐는 문제가 남는다. 
// dp니까 쪼개면 된다. 쪼개자.
// dp[1] = 13
// dp[2] = 13
// dp[3] = 앞으로 반복하면서 최대값을 구해보는 것. 무게가 될 때까지.
// while (무게 합 < 주어진 무게값) 가치를 더하기 8 + 6 = 14. dp배열의 그 앞의 최대값보다 큼. 그러니 교체
// dp[3] = 14
// dp[4] = 14가 현재까지 최대임. 똑같이 무게를 초과할 때까지 앞으로 반복해나가기. 


