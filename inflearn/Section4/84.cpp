#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int maxValue;  // 최대값을 저장할 변수
vector< pair<int, int> >schedule; // 일정과 수익을 저장할 벡터
int n; // 날짜 변수


void DFS(int L, int sum)
{
    if (L == n + 1) // n + 1일이 되면 반드시 휴가를 떠나야 하므로 이를 종료조건으로 삼음.
    {
        if (sum > maxValue) maxValue = sum; // 값을 비교해서 더 클 경우 수익 변경    
        return ;
    }
    else
    {
        if (L + schedule[L].first <= n + 1) // DFS를 넘어갈 때 최대값이 정해져있으므로, 이를 조건으로 삼아서 미리 조건을 제한해서 무한 루프에 빠지지 않게 한다. 이게 핵심이다.
            DFS(L + schedule[L].first, sum + schedule[L].second); // 다음 스케쥴로 DFS 를 돈다.
        else // 앞선 스케쥴 대로 진행했을 경우 일주일을 초과해버릴 경우엔 그냥 다음 날로 넘어가야 한다.
            DFS(L + 1, sum);  // 바로 다음날로 DFS를 돈다.
    }
}


int main(void)
{
    ios_base::sync_with_stdio(false);
    int i, period, pay;
    cin >> n;
    schedule.push_back(make_pair(0, 0));
    
    for (i = 0; i < n; i++)
    {
        cin >> period >> pay;
        schedule.push_back(make_pair(period, pay));
    }
    DFS(1, 0);
    cout << maxValue << endl;
    return 0;
}