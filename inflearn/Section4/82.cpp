#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int num[15], n, r, cnt, check[15], res[15];

void DFS(int L)
{
    if (L == r) {
        for (int j = 0; i < L; j++)
        {
            cout << res[j] << " ";
        }
        cout << endl;
        cnt++;
        return ;
    }
    else {
        for (int i = 1; i <= n; i++)
        {
            if (check[i] == 0)
            {
                res[L] = num[i];
                check[i] = 1;
                DFS(L + 1);
                check[i] = 0;
            }
        }
    }
}

int main(void)
{
    int i;
    cin >> n >> r;

    for (i = 1; i <= n; i++){
        cin >> num[i];
    }
    DFS(0);
    cout << cnt << endl;
    return 0;
}
