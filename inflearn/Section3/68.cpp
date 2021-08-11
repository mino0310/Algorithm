#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;
int n, cnt, check[21], min_val = 2147483647, sum;
vector<pair<int, int> > adj_list[21];

void dfs(int node) {
    if (node == n) {
        if (sum < min_val) min_val = sum;
        return ;
    }
    else {
        for (int i = 0; i < adj_list[node].size(); i++)
        {
            if (check[adj_list[node][i].first] == 0) 
            {
                check[adj_list[node][i].second] = 1;
                sum += adj_list[node][i].second;
                dfs(adj_list[node][i].first);
                check[adj_list[node][i].second] = 0;
                sum -= adj_list[node][i].second;
            }
        }
    }
}

int main(void)
{
    int m, i, j, node, linked_node, val;
    cin >> n >> m;
    for (i = 1; i <= m; i++) {
        cin >> node >> linked_node >> val;
        adj_list[node].push_back(make_pair(linked_node, val));
    }
    check[1] = 1;
    dfs(1);
    cout << min_val << endl;
    return 0;
}