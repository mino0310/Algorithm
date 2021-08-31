#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

// 노드, 간선, 바이러스 감염된 컴퓨터 변수
int com, edge, virus_com;
// 1번 노드에서 해당 컴퓨터까지 도달할 수 있는지를 저장할 체크배열
int ch[101];
// 연결 정보를 저장할 벡터
vector<int> network[101];


void DFS(int node)
{
    if (node > com) {
        return ;
    }
    // 다음 노드들 탐색
    for (int i = 0; i < network[node].size(); i++)
    {
        if (ch[network[node][i]] == 0) {
            ch[network[node][i]] = 1;
            DFS(network[node][i]);
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    

    // 반복변수와 임시변수들
    int i, a, b;

    // 입력
    cin >> com >> edge;
    // 인접리스트로 연결정보 저장 및 정렬
    for (i = 0; i < edge; i++){
        cin >> a >> b;
        network[a].push_back(b);
        network[b].push_back(a);
    }

    ch[1] = 1;
    DFS(1);
    for (i = 2; i < 101; i++) {
        if (ch[i] == 1) {
            virus_com++;
        }
    }
    cout << virus_com << endl;    
}


// 연결정보를 알아내는 것이 핵심. -> 그래프 이론
// 1번과 같은 네트워크에 속해있는 것들의 개수를 구하면 된다.
// 1번과 같은 네트워크를 판별하는 것이 핵심.
// 네트워크라는 것은 1번에서 해당 지점까지 갈 수 있으면 되는 것.
// 도달 여부를 알아낼 수 있는 체크 배열을 만든 다음에, 0으로 초기화하고, 도달 가능하면 1로 변경하자.