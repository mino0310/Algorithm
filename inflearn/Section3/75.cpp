#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

struct Loc {
    int day, money;
    Loc(int a, int b){
        money = a;
        day = b;
    }

    bool operator<(const Loc &b)const {
        return day > b.day;
    }
};

int main(void)
{
    int n, m, d,j , i, week = -1, sum = 0;
    vector<Loc> time;
    priority_queue<int> PQ;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> m >> d;
        if (week < d) week = d;
        time.push_back(Loc(m, d));
    }
    sort(time.begin(), time.end());
    i = week;
    j = 0;
    for (i = week; i >= 1; i--)
    {
        for ( ; j < n; j++)
        {
            if (time[j].day < i) break;
            PQ.push(time[j].money);
        }
        if (!PQ.empty())
        {
            sum += PQ.top();
            PQ.pop();
        }
    }
    cout << sum << endl;

    /*
    우선 지금은 남은 날짜를 오름차순으로 해서 정렬한 것을 가지고 있음.
    문제에서 요구하는 것은 가장 많은 돈을 버는 것.
    돈 = 3번의 행사를 통해 얻는 수입. 즉 매 순간 마다 가장 많은 돈을 얻게 되는 선택지를 고르는 것이 좋다.
    첫 날엔 60이 가장 크니까 그걸 먹고
    둘째 날엔 50이 가장 크니가 그걸 먹고
    마지막 날엔 30 그러면 140 이건 아님.

    첫쨰날엔 60이 가장 크고 없어지는 날짜 
    아하. 기회비용을 따져서 고려해야 겠네.

    첫째날엔 사라지는 금액은 20, 30 이고 고를 수 있는 가장 합리적 금액은 50
    둘째 날에는 40
    마지막 날엔 60
    이렇게 고르면 150이 된다.
    어떤 로직으로 고른거지

    남은 날짜 1일과 2일 중에서만 고민한다. 
    우선 1과 2 중에서 50이 가장 크니 50을 고른다. 그러면 20, 30 은 사라진다.
    다음 엔 40 1 / 60 2 / 30 2 이 남는다.
    그러면 그 중 가장 큰 60을? 이 논리도 아니네.

    그러면은 1일날부터 고르지 말고 3째날부터 역산을 해볼까.
    3일 날에 할 수 있는 건 60 이나 30중 하나임. 그러니 60
    2일 날에 할 수 있는 건 50 40 30임. 그중 50이 가장 크니 50
    1일 날에 할 수 있는 건 30 40임. 그 그중 40 이 가장 크니 40
    이건 되네 왜 되는거지
    */
    return 0;
}