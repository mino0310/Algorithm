#include <iostream>
#include <stack>

using namespace std;

int n, check[10];

void dfs(int k)
{
    if (k == n + 1) {
        for (int i = 1; i <= n; i++) {
            if (check[i] == 1){
                cout << i << " ";
            }
        }
        cout << endl;
        return ;
    }
    else {
        check[k] = 1;
        dfs(k+1);
        check[k] = 0;
        dfs(k+1);
    }
}


int main(void)
{
    cin >> n;

    dfs(1);

    return 0;
}