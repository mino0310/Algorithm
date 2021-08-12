#include <iostream>

using namespace std;

int adj_matrix[21][21], n, check[21], min_val = 2147483647, sum;

void dfs(int node)
{
    if (node == n) {
        if (sum < min_val) min_val = sum;
        return ;
    } else {
        for (int i = 1; i <= n; i++) {
            if (adj_matrix[node][i] != 0 && check[i] == 0) {
                sum += adj_matrix[node][i];
                check[i] = 1;
                dfs(i);
                sum -= adj_matrix[node][i];
                check[i] = 0;
            }
        }
    }
}


int main(void)
{
    int m, i, j, row, col, val;
    
    cin >> n >> m;
    for (i = 1; i <= m; i++) {
        cin >> row >> col >> val;
        adj_matrix[row][col] = val;
    }
    check[1] = 1;
    dfs(1);
    cout << min_val << endl;

    return 0;
}