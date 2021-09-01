#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

int node, cnt, ch[1001];
vector<int> adj_list[1001];

void DFS(int v)
{
    for (int i = 0; i < adj_list[v].size(); i++){
        if (ch[adj_list[v][i]] == 0) {
            ch[adj_list[v][i]] = 1;
            DFS(adj_list[v][i]);
            // 굳이 체크를 풀어줄 필욘 없음.
        }
    }
}

void BFS(int v)
{
    queue<int>Q;
    int tmp;

    Q.push(v);
    while (!Q.empty()){
        tmp = Q.front();
        Q.pop();
        for (int i = 0; i < adj_list[tmp].size(); i++){
            if (ch[adj_list[tmp][i]] == 0) {
                Q.push(adj_list[tmp][i]);
                ch[adj_list[tmp][i]] = 1;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int edge, i, j, a, b;

    cin >> node >> edge;
    // 그래프 정보를 인접리스트로 받는다.
    for (i = 0; i < edge; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    // 1번에서부터 시작해서 그래프의 연결정보를 완전탐색한다. (탐색할 수 있는 조건은 해당 노드가 방문된 적이 없어야 한다.)
    for (i = 1; i <= node; i++)
    {
        // 방문된 적 없고, 연결된 노드가 있다면 완전 탐색한다.
        if (ch[i] == 0){
            ch[i] = 1;
            cnt++;
            // DFS(i);
            BFS(i);
        } 
    }
    cout << cnt << endl;
}
