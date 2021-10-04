#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int vex;
    int dis;
    Edge(int a, int b){
        vex = a;
        dis = b;
    }
    // 최소힙 구조를 만들기 위해서 연산자 오버로딩
    bool operator<(const Edge &b)const {
        return dis > b.dis;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int v, e, start_v, a, b, c;

    cin >> v >> e >> start_v;
    
    priority_queue<Edge> Q;
    vector< pair<int, int> >graph[20010];
    vector<int> dist(v + 1, 2147483647);
    
    for (int i = 1; i <= e; i++) {
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
    }

    Q.push(Edge(start_v, 0));

    dist[start_v] = 0;
    while (!Q.empty()){
        int now = Q.top().vex;
        int cost = Q.top().dis;
        Q.pop();
        if (cost > dist[now]) continue;
        for (int i = 0; i < graph[now].size(); i++){
            int next_node = graph[now][i].first;
            int total_dis = cost + graph[now][i].second;
            if (dist[next_node] > total_dis) {
                dist[next_node] = total_dis;
                Q.push(Edge(next_node, total_dis));
            }
        }
    }
    for (int i = 1; i <= v; i++) {
        if (dist[i] != 2147483647) cout << dist[i] << "\n";
        else cout << "INF\n";
    }

}

