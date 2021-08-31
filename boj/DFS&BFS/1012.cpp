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
    if (x > row || x < 1 || y > col || y < 1){
        return ;
    }
    else {
        for (int i = 0; i < 4; i++)
        {
            int nx = x + dr[i];
            int ny = y + dc[i];
            if (map[nx][ny] == 1 && ch[nx][ny] == 1) {
                ch[nx][ny] = 1;
                cnt++;
                DFS(row, col, nx, ny);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t, i, row, col, carbbage;
    vector<int> bug_num;
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
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                if (map[j][k] == 1 && ch[j][k] == 0) {
                    cnt = 1;
                    ch[j][k] = 1;
                    cout << "test\n";
                    DFS(row, col, j, k);
                    bug_num.push_back(cnt);
                }
            }
        }
        for (int h = 0; h < bug_num.size(); h++)
            cout << bug_num[h] << " ";
        cout << endl;
        // cout << bug_num.size() << endl;
        bug_num.clear();
    }
    return 0;
}

// 여러 경우가 들어오고 해당 경우가 들어올 떄마다 완전 탐색을 통해서 배추 무리가 몇 개인지 세야한다.
// 배추 밭이 테스트 케이스만큼 들어올 테니까. 테스트 케이스가 시작될때마다 맵을 초기화해줘야겠다.
// 초기화가 되어 있는 것에다가 배추의 위치를 기록하고 그 다음 처음부터 완전탐색으로 배추 무리를 세자.
