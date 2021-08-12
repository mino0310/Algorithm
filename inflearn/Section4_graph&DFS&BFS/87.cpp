#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)      
{
    queue<pair<int, int> > Q;
    int n, i, j, cnt = 0;
    int map[21][21], check[21][21] = {0, };
    int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
    int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
    pair<int, int> tmp;

    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> map[i][j];
        }
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (map[i][j] == 1 && check[i][j] == 0){
                Q.push(make_pair(i, j));
                check[i][j] = 1;
                while (!Q.empty())
                {
                    tmp = Q.front();
                    Q.pop();
                    for (int k = 0; k < 8; k++)
                    {
                        if (map[tmp.first + dx[k]][tmp.second + dy[k]] == 1 && check[tmp.first + dx[k]][tmp.second + dy[k]] == 0)
                        {
                            Q.push(make_pair(tmp.first + dx[k], tmp.second + dy[k]));
                            check[tmp.first + dx[k]][tmp.second + dy[k]] = 1;
                        }
                    }
                }
                cnt++;
            }
        }
    }

    cout << cnt << endl;



    return 0;
}