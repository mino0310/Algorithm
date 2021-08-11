#include <iostream>
#include <vector>
#include <queue>

using namespace std;
// 각 노드의 정점과 해당 정점까지의 가중치값을 저장할 구조체
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

int main(void)
{
    int i, n, m, a, b, c;
    priority_queue<Edge> Q; // 매 반복마다 최소거리비용을 가지는 노드를 판별하기 위한 우선 순위 큐 - 최소힙
    vector< pair<int, int> >graph[30]; // 가중치 방향 그래프의 정보를 저장하기 위한 인접 리스트 배열
    cin >> n >> m;
    vector<int> dist(n + 1, 2147483647); // 거리 비용 정보를 저장하는 1차원 벡터 최대값으로 초기화
    // 그래프의 정보를 입력받아 인접리스트 구성
    for (i = 1; i <= m; i++)
    {
        cin >> a >> b >> c;
        graph[a].push_back(make_pair(b, c));
    }
    // 우선순위 큐에 1번 노드에 대한 정보 - 1번 노드이고 거리비용이 0을 삽입.
    Q.push(Edge(1, 0));
    // 1번 노드는 자기 자신이므로 0을 대입.
    dist[1] = 0;
    // 우선순위큐가 빌 때까지 노드의 연결 정보를 파악해서 1번 정점부터 각 정점까지의 최소 거리 비용 구해서 벡터에 넣기
    while (!Q.empty())
    {   
        int now = Q.top().vex; // 우선 순위 큐에서 가중치값을 기준으로 가장 작은 노드를 꺼내고 노드 번호를 저장
        int cost = Q.top().dis; // 우선 순위 큐에서 가중치값을 기준으로 가장 작은 노드를 꺼내고 가중치를 저장
        Q.pop(); // 해당 노드를 우선순위 큐에서 뺀다.
        if (cost > dist[now]) continue; // 그 시점에 1번 노드으로부터의 거리 비용값이 가장 작은 노드의 가중치 값이 해당 노드의 현재 거리비용 값보다 크면 더 이상 진행하지 않는다. 
        //큰 값이 들어가면 반복문 안에서 할 일이 없음. 작은 값이 이미 있다는 것은 작은 값으로 이미 반복문을 진행했다는 의미임. 그러니 더 큰값은 할 일이 없음
        for (i =0; i < graph[now].size(); i++)
        {
            int next_node = graph[now][i].first; // 연결된 노드의 노드번호를 저장한다.
            int total_dis = cost + graph[now][i].second; // 연결된 노드의 가중치 값과 직전의 가중치 값을 더해서 저장한다.
            if (dist[next_node] > total_dis) // 연결된 노드까지의 현재 저장되어 있는 최소 거리 비용값이 지금 구한 값보다 크면 교체 과정이 일어나면 된다.
            {
                dist[next_node] = total_dis; // 연결된 노드까지의 최소 거리비용을 지금 구한 값으로 바꿔준다.
                Q.push(Edge(next_node, total_dis)); // 연결된 노드와 해당 노드까지의 최소 거리비용을 우선순위 큐에 넣어둔다. 이는 가중치 기준으로 최소값을 구해내는 과정에 필요하다. 
            }
        }
    }

    for (i = 2; i <= n; i++)
    {
        if (dist[i] != 2147483647) cout << i << " : " << dist[i] << endl;
        else cout << i << " : impossible" << endl;
    }

    return 0;
}