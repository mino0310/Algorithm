#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> adj_list[8];
int check[8];


void bfs(int node)
{
    queue<int> q;
    int i, x, y;
    q.push(node);
    check[node] = 1;

    while (!q.empty()) {
        x = q.front();
        q.pop();

        cout << x << " ";
        for (i = 0; i < adj_list[x].size(); i++) {
            if (check[adj_list[x][i]] == 0)
            {
                q.push(adj_list[x][i]);
                check[adj_list[x][i]] = 1;
            }
        }
    }
}

int main(void)
{
    int i, node, linked_node;
    for (i = 0; i < 6; i++) {
        cin >> node >> linked_node;
        cout << "asdf";
        adj_list[node].push_back(linked_node);
    }
    bfs(1);
    return 0;
}