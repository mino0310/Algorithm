#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <queue>
#include <string>

// using namespace std;

// int map[30][30], ch[30][30];
// int dr[4] = {-1, 0, 1, 0};
// int dc[4] = {0, 1, 0, -1};
// int n, cnt;

// void DFS(int x, int y) {
//     if (x < 1 || x > n || y < 1 || y > n){
//         return ;
//     }
//     else {
//         for (int i = 0; i < 4; i++){
//             int nx = x + dr[i];
//             int ny = y + dc[i];
//             if (ch[nx][ny] == 0 && map[nx][ny] == 1) {
//                 ch[nx][ny] = 1;
//                 cnt++;
//                 DFS(nx, ny);
//             }
//         }
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
//     vector<int> home_num;

//     string tmp_val;

//     cin >> n;
//     for (int i = 1; i <= n; i++){
//         cin >> tmp_val;
//         for (int j = 0; j < tmp_val.length(); j++)
//             map[i][j+1] = tmp_val[j] - '0';
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             if (map[i][j] == 1 && ch[i][j] == 0) {
//                 ch[i][j] = 1;
//                 cnt = 1;
//                 DFS(i, j);
//                 if (cnt)
//                    home_num.push_back(cnt);
//             }
//         }
//     }
//     sort(home_num.begin(), home_num.end());
//     cout << home_num.size() << endl;

//     for (int i = 0; i < home_num.size(); i++)
//     {
//         cout << home_num[i] << endl;
//     }
// }



using namespace std;

int map[30][30], ch[30][30];
int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};
int cnt, home_num = 1;
vector<int> home_per_cluster;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    string tmp_val;
    queue<pair<int, int> > Q;

    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> tmp_val;
        for (int j = 0; j < tmp_val.length(); j++)
            map[i][j+1] = tmp_val[j] - '0';
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (map[i][j]){
                Q.push(make_pair(i, j));
                ch[i][j] = 1;
                cnt = 1;
                while (!Q.empty()){
                    pair<int, int> tmp = Q.front();
                    Q.pop();
                    int x = tmp.first;
                    int y = tmp.second;
                    for (int k = 0; k < 4; k++){
                        int nx = x + dr[k]; 
                        int ny = y + dc[k];
                        if (ch[nx][ny] == 0 && map[nx][ny] == 1 && nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
                            Q.push(make_pair(nx, ny));
                            ch[nx][ny] = 1;
                            cnt++;
                            map[nx][ny] = 0;
                        }
                    }
                }
                if (cnt)
                    home_per_cluster.push_back(cnt);
            }
        }
    }
    cout << home_per_cluster.size() << endl;
    sort(home_per_cluster.begin(), home_per_cluster.end());
    for (int i = 0; i < home_per_cluster.size(); i++)
    {
        cout << home_per_cluster[i] << "\n";
    }
    return 0;
}