#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int n, ch[101], cnt = 2147483647, a, b, flag;
vector<int> adj_list[101];

void DFS(int node, int sum)
{
    if (node == b){
        if (sum < cnt) cnt = sum;
        return ;
    }
    else {
        for (int i = 0; i < adj_list[node].size(); i++){
            if (ch[adj_list[node][i]] == 0) {
                ch[adj_list[node][i]] = 1;
                DFS(adj_list[node][i], sum + 1);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    

    int i, edge;
    // 전체 노드의 개수를 입력받는다.
    // 촌수를 계산해야 하는 두 노드를 입력받는다.
    // 간선의 개수를 입력받는다.
    cin >> n >> a >> b >> edge;
    // 간선 정보들을 입력받는다.
    for (i = 0; i < edge; i++)
    {
        int tmp_a, tmp_b;
        cin >> tmp_a >> tmp_b;
        adj_list[tmp_a].push_back(tmp_b);
        adj_list[tmp_b].push_back(tmp_a);
    }

    ch[a] = 1;
    DFS(a, 0);
    // 탐색이 제대로 이뤄질 경우 해당 촌수 정보를 출력한다.
    if (cnt != 2147483647)
        cout << cnt << endl;
    // 탐색이 제대로 이뤄지지 않을 경우 -1을 출력한다. 
    else 
        cout << -1 << endl;
    return 0;
}





// 완전탐색을 통해서 노드를 넘어갈 때마다 +1 해주며 촌수 정보를 기록한다.
