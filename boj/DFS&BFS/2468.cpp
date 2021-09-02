#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int map[101][101], ch[101][101];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int res = -1;
vector<int> pp;

void DFS(int x, int y, int rain_high){
    if (x < 1 || x > 100 || y < 1 || y > 100) {
        return ;
    } else {
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dr[i];
            int ny = y + dc[i];
            if (ch[nx][ny] == 0 && map[nx][ny]){
                ch[nx][ny] = 1;
                DFS(nx, ny, rain_high);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, tmp, rain = 0, cnt = 0;
    // 맵의 가로, 세로의 크기에 대한 값을 입력받는다
    cin >> n;
    // 각 지역의 높이에 대한 정보를 입력받는다.
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) {
            cin >> map[i][j];
        }
    }
    // 모든 지역이 비에 잠길 때까지 반복문을 지속한다.
    while (1){
        cnt = 0;
        // 각 비의 양마다 맵을 탐색하면서 지역의 개수를 센다. 
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++){
                ch[i][j] = 0;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++) {
                if (map[i][j] < rain) {
                    ch[i][j] = 1;
                
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (ch[i][j] == 0) {
                    ch[i][j] = 1;
                    DFS(i, j, rain);
                    cnt++;
                }
            }
        }
        // 각 반복마다 내리는 비의 양을 1씩 증가시킨다.
        rain++;
        if (rain > 101) break ;
        pp.push_back(cnt);
    }
    sort(pp.begin(), pp.end());
    cout << pp[pp.size() - 1] << endl;    
    return 0;
}