#include <iostream>
#include <vector>

using namespace std;


vector<int> adj_list[30];

int n, cnt, check[30];


void dfs(int node)
{
    if (node == n) {
        cnt++;
        return ;
    }
    else {
        for (int i = 0; i < adj_list[node].size(); i++) {
            if (check[adj_list[node][i]] == 0) {
                check[adj_list[node][i]] = 1;
                dfs(adj_list[node][i]);
                check[adj_list[node][i]] = 0;
            }
        }
    }
}

int main(void)
{
    int node, edge, linked_node, i;
    cin >> n >> edge;
    for (i = 1; i <= edge; i++){
        cin >> node >> linked_node;
        adj_list[node].push_back(linked_node);
    }
    check[1] = 1;
    dfs(1);
    cout << cnt << endl;
    return 0;
}