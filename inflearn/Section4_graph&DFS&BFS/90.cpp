#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int map[30][30], here[30][30];
int dx_4[4] = {0, 1, 0, -1};
int dy_4[4] = {-1, 0, 1, 0};
int dx_8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy_8[8] = {-1, -1, -1, 0, 1, 1, 1, 0};


int distance(int x1, int y1, int x2, int y2)
{
    return abs(x1 - x2) + abs(y1 - y2);
}

int main(void)
{
    int n, m, i, j, simba_size = 2, sx, sy;
    queue<pair<int, int> > remain_rabbits;
    pair<int, int> tmp;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> map[i][j];
            if (map[i][j] > 0 && map[i][j] < 8)
            {
                remain_rabbits.push(make_pair(i, j));
            }
            else if (map[i][j] == 9)
            {
                sx = i;
                sy = j;
            }
        }
    }

    while(!remain_rabbits.empty())
    {
        tmp = remain_rabbits.front();
        remain_rabbits.pop();

        for (int k = 0; k < 4; k++)
        {
            int nx = tmp.first + dx[k];
            int ny = tmp.second + dy[k];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                if (map[nx][ny] == 0) {
                    
                }
            }
        }
    }

// 심바가 계속 움직이니까 다익스트라 같은 것은 쓰기 어려울 거 같고, 최소힙을 쓴다면 계속 갱신을 해줘야해서
// 못 쓰겠네
// 그러면 나머지 점들을 다 고정해두고 그때그때 거리를 갱신한 다음에 가장 가까운 것(우선순위 따라서)으로 가야하지
// 그런데 길이 막혀있으면 어떡하지? 나보다 높은 게 가까이에 껴있으면은 거리 구하는 공식에서 거리를 그저 좌표값들의 차의 절대값으로만 구하는 것은 안되겠네

/*
움직임을 의사코드로나마 구현해보자. 오늘에 못 풀어도 된다. 논리를 따라가보자.
매 이동시에
하나라면 그 점을 방문

두 개 이상의 토끼가 있다면 아래의 로직을 시행

if (상하좌우에 있다면)
{
    if (하나만 있다면) {
        그 지점 방문
    }
    else if (두 개 이상이 있다면)
    {
        위부터 방문한다.
    }
}
else if (상하좌우에 없다면)
{
    if (대각선에 있다면 == 8방향 탐색했을 떄 값이 있다면)
    {
        if (여러 마리라면)
        {
            
        }
        else if (한 마리라면) {
            그 지점 방문
        }
    }
    else if (대각선에도 없다면 == 더 멀리 떨어져 있다면 == 8방향 탐색거리보다 멀다면)
}
*/




    // int size = remain_rabbits.size();

    // for (i = 0; !remain_rabbits.empty(); i++)
    // {
    //     cout << remain_rabbits.front().first << " " << remain_rabbits.front().second << endl;
    //     remain_rabbits.pop();
    // }


    return 0;
}