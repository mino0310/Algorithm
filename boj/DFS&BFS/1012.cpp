#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>


using namespace std;

int cnt;
int map[60][60], ch[60][60];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

void DFS(int row, int col, int x, int y) {
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dr[i];
        int ny = y + dc[i];
        if (map[nx][ny] == 1 && ch[nx][ny] == 0) {
            ch[nx][ny] = 1;
            cnt++;
            DFS(row, col, nx, ny);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, i, row, col, carbbage;
    vector<int> bug_num, res;
    cin >> t;
    
    for (i = 0; i < t; i++)
    {
        int a, b;
        for (int k = 0; k < 51; k++) {
            for (int l = 0; l < 51; l++)
            {
                map[k][l] = 0;
                ch[k][l] = 0;
            }
        }
        cin >> col >> row >> carbbage;
        for (int j = 0; j < carbbage; j++)
        {
            cin >> a >> b;
            map[a][b] = 1;        
        }
        for (int j = 0; j < col; j++)
        {
            for (int k = 0; k < row; k++)
            {
                if (map[j][k] == 1 && ch[j][k] == 0) {
                    cnt = 1;
                    ch[j][k] = 1;
                    DFS(row, col, j, k);
                    bug_num.push_back(cnt);
                }
            }
        }
        res.push_back(bug_num.size());
        bug_num.clear();
    }
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
