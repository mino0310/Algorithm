#include <iostream>

using namespace std;

int input[11], visited[11], n, total_sum, tmp_sum_a, tmp_sum_b, flag;

void dfs(int k)
{
    if (k  == n + 1) {
        tmp_sum_b = tmp_sum_a = 0;
        for (int i = 1; i <= n; i++){
            if (visited[i] == 1)
                tmp_sum_a += input[i];
            if (visited[i] == 0)
                tmp_sum_b += input[i];
        }
        if (tmp_sum_a == tmp_sum_b) {
            flag = 1;
            return ;
        }
        return ;
    }
    else {
        visited[k] = 1;
        dfs(k+1);
        visited[k] = 0;
        dfs(k+1);
    }
}

int main(void)
{
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> input[i];
        total_sum += input[i];
    }

    dfs(1);
    if (flag == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}