#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>


using namespace std;

int w = 5, h = 5, cnt;
int dc[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dr[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int map[51][51], ch[51][51];
vector<int> land, res;

void DFS(int x, int y) {
    if (x < 1 || x > h || y < 1 || y > w) {
        return ;
    } else {
        for (int i = 0; i < 8; i++){
            int nx = x + dr[i];
            int ny = y + dc[i];
            if (map[nx][ny] == 1 && ch[nx][ny] == 0)
            {
                ch[nx][ny] = 1;
                cnt++;
                DFS(nx, ny);
            }
        }
    }
}

void BFS(int x, int y)
{
    queue<pair<int, int> > Q;
    pair<int, int> tmp;
    Q.push(make_pair(x, y));
    
    while (!Q.empty()){
        tmp = Q.front();
        Q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = tmp.first + dr[i];
            int ny = tmp.second + dc[i];
            if (map[nx][ny] == 1 && ch[nx][ny] == 0 && x >= 1 && nx <= h && ny >= 1 && ny <= w) {
                Q.push(make_pair(nx, ny));
                ch[nx][ny] = 1;
                cnt++;
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    while (1){
        // 일단 w,h 를 입력받음 
        cin >> w >> h;
        // 반복문으로 입력이 0 0 이 들어올 때까지 한다. w = 0, h = 0 인 경우에 종료한다는 말.
        if (!w && !h) break ;
        // 초기화
        for (int i = 0; i <= h; i++) {
            for (int j = 0; j <= w; j++)
            {
                map[i][j] = 0;
                ch[i][j] = 0;
            }
        }
        // 사용할 2차원 배열 맵에 값들을 저장한다.
        for (int i = 1; i <= h; i++){
            for (int j = 1; j <= w; j++) {
                cin >> map[i][j];
            }
        }
        // 하나의 섬을 다 방문하면 DFS를 종료하고 섬의 개수를 출력 변수(아마도 벡터)에 저장하고 2차원 배열 탐색을 계속한다. 
        for (int i = 1; i <= h; i++) {
            for (int j = 1; j <= w; j++) {
                if(map[i][j] == 1 && ch[i][j] == 0) {
                    cnt = 1;
                    // DFS(i, j);
                    BFS(i, j);
                    land.push_back(cnt);
                }
            }
        }
        res.push_back(land.size());
        land.clear();
    }
    //이를 반복해서 2차원 배열 반복이 모두 종료되면 출력 변수(벡터)에 담겨있는 섬의 개수를 출력한다.
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << endl;
    
    return 0;
}