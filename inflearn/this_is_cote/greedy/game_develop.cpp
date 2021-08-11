
#include <iostream>
#include <algorithm>

using namespace std;

int map[50][50];

int main(void)
{
    int n, m, x, y, tmp_direction, direction, tmp, nx, ny, cnt = 1, turn_time = 0;
    cin >> n >> m >> x >> y >> direction;

    int dx[4] = {0, 1, 0, -1};
    int dy[4] = {-1, 0, 1, 0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tmp;
            map[i][j] = tmp;
        }
    }

    map[x][y] = 3;
    while (1) {
        // if (end_condition) break ;
        turn_time = 0;
        while (1) {
            if (turn_time == 4) {
                tmp_direction = direction + 2;
                if (tmp_direction >= 4) tmp_direction -= 4;
                nx = x + dx[tmp_direction];
                ny = y + dy[tmp_direction];
                if (map[nx][ny] == 0) {
                    x = nx;
                    y = ny;
                    direction = tmp_direction;
                    break ;
                }
                cout << cnt << endl;
                return 0;
            }
            direction -= 1;
            if (direction < 0) direction = 3;
            if (direction >= 4) direction -= 4;
            nx = x + dx[direction];
            ny = y + dy[direction];
            if (map[nx][ny] == 0) {
                map[nx][ny] = 3;
                x = nx;
                y = ny;
                cnt++;
                break ;
            }
            turn_time++;
        }
    }
    return 0;
}
    // 일단 입력 받은 지점에 방문했다고 표시를 하고.
    // 북 서 남 동 순으로 검사를 한다. 
    // dx, dy를 사용해서 방향에 따라서 좌표값을 이동해서 해당 값을 검사하면 된다. 방향값이 dx, dy의 인덱스 값으로 사용될 수 있으니까. 연결해서 사용할 수 있곘네.

    
    // while (1)
    // {
    //     if(end_condition) break;
    //     direction -= 1; // 방향을 전환한다.
    //     if (direction < 0) direction = 3; // 방향 값의 범위를 벗어날 경우 다시 잡아줌.
        
    //     if (direction == 0) {
    //         // 북쪽일 때 할 일
    //         if (map[x][y-1] == 0) {
    //             map[x][y] = 3;
    //             x += dx[direction];
    //             y += dy[direction];
    //             cnt++;
    //         }
    //     }
    //     else if (direction == 3) {
    //         // 서쪽일 때 할 일
    //         if (map[x-1][y] == 0) {
    //             map[x][y] = 3;
    //             x += dx[direction];
    //             y += dy[direction];
    //             cnt++;
    //         }
    //     }
    //     else if (direction == 2) {
    //         // 남쪽일 때 할 일
    //         if (map[x][y+1] == 0) {
    //             map[x][y] = 3;
    //             x += dx[direction];
    //             y += dy[direction];
    //             cnt++;
    //         }
    //     }
    //     else if (direction == 1) {
    //         // 동쪽일 때 할 일
    //         if (map[x+1][y] == 0) {
    //             map[x][y] = 3;
    //             x += dx[direction];
    //             y += dy[direction];
    //             cnt++;
    //         }
    //     }
    //     else {
    //         cout << cnt;
    //         return 0;
    //     }
        // 이를 반복해서 4방향을 확인하면서 뚫린다면 그곳으로 가면 됨. 이 말은 좌표를 변경하라는 말임. 방향과 좌표는 매우 관련이 있음. 이 규칙도 정해주면 될 듯
    // }
>>>>>>> 2071c2b29f8321057ce3e4f448ace5a42ef64f8c
