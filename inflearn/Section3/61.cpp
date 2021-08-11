#include <iostream>

int n, m, visited[11], input[11], tmp_sum, cnt,add[11], sub[11];

using namespace std;

void dfs(int node)
{
    if (node == n + 1) {
        tmp_sum = 0;
        for (int l = 1; l <= n; l++) {
            if (add[l] == 1) {
                tmp_sum += input[l];
              }
            if (sub[l] == 1) {
                tmp_sum -= input[l];
            }
        }
        if (tmp_sum == m) cnt++;
        return ;
    }
    // 해당 노드의 숫자를 더한다.
    add[node] = 1;
    sub[node] = 0;
    dfs(node + 1);
    
    // 해당 노드의 숫자를 뺀다.
    add[node] = 0;
    sub[node] = 1;
    dfs(node + 1);

    // 해당 노드의 숫자를 무시한다.
    sub[node] = 0;
    add[node] = 0;
    dfs(node + 1);
}

int main(void)
{
    int i;

    cin >> n >> m;
    for (i = 1; i <= n; i++) {
        cin >> input[i];
    }
    dfs(1);
    
    if (cnt != 0) cout << cnt;
    else cout << -1;
    return 0;
}
