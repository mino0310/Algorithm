#include <iostream>
#include <queue>
#include <stack>
#include <vector>
#include <algorithm>

using namespace std;

int ch[1001], n;
vector<int> adj_list[1001];

void DFS(int v)
{
    cout << v << " ";
    if (adj_list[v].size() == 0)
    {
        return ;
    }
    else {
        for (int i = 0; i < adj_list[v].size(); i++) {
            if (ch[adj_list[v][i]] == 0) {
                ch[adj_list[v][i]] = 1;
                DFS(adj_list[v][i]);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m, v, i, a, b, tmp;
    queue<int> Q;

    cin >> n >> m >> v;
    for (i = 0; i < m; i++)
    {
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
        sort(adj_list[a].begin(), adj_list[a].end());
        sort(adj_list[b].begin(), adj_list[b].end());
    }

    ch[v] = 1;
    DFS(v);
    cout << endl;
    for (i = 0; i < 1001; i++)
        ch[i] = 0;
    

    ch[v] = 1;
    Q.push(v);
    while (!Q.empty()){
        tmp = Q.front();
        Q.pop();
        cout << tmp << " ";
        for (int i = 0; i < adj_list[tmp].size(); i++)
        {
            if (ch[adj_list[tmp][i]] == 0) {
                Q.push(adj_list[tmp][i]);
                ch[adj_list[tmp][i]] = 1;
            }
        }
    }
    cout << endl;

    return 0;
}