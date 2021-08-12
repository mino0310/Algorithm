#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int m, sum, dis;
int map[51][51], check[15], res = 2147483647;
vector<pair<int, int> > P, H;

void DFS(int s, int L)
{
    if (L == m)
    {
        sum = 0;
        for (int j = 0; j < H.size(); j++)
        {
            dis = 2147483647;
            for (int k = 0; k < L; k++)
            {
                dis = min(dis,  abs(H[j].first - P[check[k]].first) + abs(H[j].second - P[check[k]].second));
            }
            sum += dis;
        }
        if (sum < res) res = sum;
        return ;
    }

    else{
        for (int i = s; i < P.size(); i++)
        {
            check[L] = i;
            DFS(i + 1, L + 1);
        }
    }
}

int main(void)
{
    int n, i, j;
    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            cin >> map[i][j];
            if (map[i][j] == 2) {
                P.push_back(make_pair(i, j));
            }
            else if (map[i][j] == 1) {
                H.push_back(make_pair(i, j));
            }
        }
    }
    DFS(0, 0);
    cout << res << endl;
    return 0;
}


