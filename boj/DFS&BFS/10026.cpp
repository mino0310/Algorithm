#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

int n, cnt_common, cnt_unique;
int map_common[101][101], map_unique[101][101], ch[101][101];
int dc[4] = {0, 1, 0, -1};
int dr[4] = {-1, 0, 1, 0};


void DFS_C(int x, int y)
{
    if (x < 1 || x > 100 || y < 1 || y > 100){
        return ;
    } else {
        for (int i = 0; i < 4; i++){
            int nx = x + dr[i];
            int ny = y + dc[i];
            if (map_common[nx][ny] == map_common[x][y] && ch[nx][ny] == 0){
                ch[nx][ny] = 1;
                DFS(nx, ny);
            }
        }
    }
}

void DFS_U(int x, int y)
{
    if (x < 1 || x > 100 || y < 1 || y > 100){
        return ;
    } else {
        for (int i = 0; i < 4; i++){
            int nx = x + dr[i];
            int ny = y + dc[i];
            if (ma[nx][ny] == map_common[x][y] && ch[nx][ny] == 0){
                ch[nx][ny] = 1;
                DFS(nx, ny);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int i, j, t = 0;
    string tmp;

    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            cin >> tmp;
            if (!tmp.compare("R")){
                map_common[i][j] = 1;
                map_unique[i][j] = 1;
            } else if (!tmp.compare("G")) {
                map_common[i][j] = 2;
                map_unique[i][j] = 1;
            } else if (!tmp.compare("B")) {
                map_common[i][j] = 3;
                map_unique[i][j] = 2;
            }
        }
    }
    while (t < 2){
        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++)
                ch[i][j] = 0;
        }
        for (i = 1; i <= n; i++){
            for (j = 1; j <= n; j++){
                if (ch[i][j] == 0){
                    ch[i][j] = 1;
                    DFS(i, j);
                }
            }
        }
        t++;
    }

    cout << cnt_unique << endl << cnt_common << endl;
    return 0;
}

// 그래프 완전 탐색 문제
// R, G를 묶지 않고 별개로 했을 때, 완전 탐색이 이뤄지는 갯수와
// R, G를 묶고 완전 탐색이 이뤄지는 갯수를 출력하는 문제.

