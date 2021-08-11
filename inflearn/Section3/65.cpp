#include <iostream>

using namespace std;
int map[8][8], check[8][8], x = 1, y = 1, cnt;
int dx[5] = {0, -1, 0, 1};
int dy[5] = {-1, 0, 1, 0};

void dfs(int x, int y)
{
    if (x < 1 || x > 7 || y < 1 || y > 7) return ;
    if (x == 7 && y == 7) {
        cnt++;
        return ;
    }
    for (int i = 0; i < 4; i++) {
        int nx, ny;
        nx = x + dx[i];
        ny = y + dy[i];
        if (nx < 1 || nx > 7|| ny < 1 || ny > 7) continue;
        if (!map[x][y] && !check[nx][ny]) {
            check[nx][ny] = 1;
            dfs(nx, ny);
            check[nx][ny] = 0;
        }
    }
}

int main(void)
{
    int i, j;
    for (i = 1; i <= 7; i++){
        for (j = 1; j <= 7; j++)
        {
            cin >> map[i][j];
        }
    }
    check[1][1] = 1;
    dfs(1, 1);
    cout << cnt << endl;
    return 0;
}