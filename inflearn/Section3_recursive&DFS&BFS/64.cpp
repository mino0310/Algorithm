#include <iostream>

int adj_matrix[21][21], cnt, n, visited[10];
using namespace std;

void dfs(int l, int vertex)
{
    if (vertex == 0 || l == n + 1) return ;
    if (vertex == n) {
        cnt++;        
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (adj_matrix[vertex][i] == 1 && !visited[i]) {
            visited[i] = 1;
            dfs(l + 1, i);
            visited[i] = 0;
        } else {
            dfs(l + 1, 0);
        }   
    }
}

int main(void)
{
    int m, i, row, col;
    cin >> n >> m;

    for (i = 1; i <= m; i++) {
        cin >> row >> col;
        adj_matrix[row][col] = 1;
    }
    visited[1] = 1;
    dfs(1, 1);
    cout << cnt << endl;
    return 0;
}