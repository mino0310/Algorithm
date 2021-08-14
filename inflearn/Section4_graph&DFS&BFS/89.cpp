#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int map[1001][1001], dis[1001][1001];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};


int main(void)
{
    int row, col, i, j, flag = 0, min_day = 0;
    int max = -21470000;
    queue<pair<int, int> > Q;
    pair<int, int> tmp;

    cin >> col >> row;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 1){
                Q.push(make_pair(i, j));
            }
        }
    }
    if (Q.size() == row * col) {
        cout << 0 << endl;
        return 0; 
    }

    while (!Q.empty())
    {
        tmp = Q.front();
        Q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nx = tmp.first + dx[k];
            int ny = tmp.second + dy[k];
            if (map[nx][ny] == 0){
                if (nx >= 1 && nx <= row && ny >= 1 && ny <= col) {
                    map[nx][ny] = 1;
                    dis[nx][ny] = dis[tmp.first][tmp.second] + 1;
                    Q.push(make_pair(nx, ny));
                }
            }
        }
    }
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (dis[i][j] > max) max = dis[i][j];
            if (map[i][j] == 0) flag = 1;
        }
    }
    if (flag == 1) cout << -1 << endl;
    else {
        cout << max << endl;
    }
    return 0;
}

