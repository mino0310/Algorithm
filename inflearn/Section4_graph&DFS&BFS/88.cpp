#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int map[8][8], check[8][8];
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};
queue<pair<int, int> > Q;

int main(void)
{
    int i, j, cnt = 0, flag = 0;
    pair<int, int> tmp;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            cin >> map[i][j];
        }
    }
    Q.push(make_pair(1, 1));
    check[1][1] = 1;
    while (!Q.empty())
    {
        tmp = Q.front();
        Q.pop();
        for (int k = 0; k < 4; k++)
        {
            int nx, ny;
            nx = tmp.first + dx[k];
            ny = tmp.second + dy[k];
            if (map[nx][ny] == 0 && check[nx][ny] == 0 && nx >= 1 && nx <= 7 && ny >= 1 && ny <= 7)
            {
                Q.push(make_pair(nx, ny));
                check[nx][ny] = check[tmp.first][tmp.second] + 1;
            }
        }
    }
    cout << check[7][7] - 1 << endl;

    return 0;
}