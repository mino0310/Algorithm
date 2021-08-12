#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int number = 9;
int visited[9];
vector<int> a[10];

void bfs(int node)
{
    queue<int> q;
    q.push(node);
    visited[node] = 1;

    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        
        cout << x << " ";
        for (int i = 0; i < a[x].size(); i++) {
            int y = a[x][i];
            if (!visited[y]) {
                q.push(y);
                visited[y] = 1;
            }
        }
    }
}

int main(void)
{
    a[1].push_back(2);
    a[2].push_back(1);

    a[1].push_back(3);
    a[3].push_back(1);

    a[2].push_back(4);
    a[4].push_back(2);

    a[2].push_back(5);
    a[5].push_back(2);

    a[4].push_back(8);
    a[8].push_back(4);

    a[5].push_back(9);
    a[9].push_back(5);

    a[3].push_back(6);
    a[6].push_back(3);

    a[3].push_back(7);
    a[7].push_back(3);

    bfs(1);
    return 0;
}