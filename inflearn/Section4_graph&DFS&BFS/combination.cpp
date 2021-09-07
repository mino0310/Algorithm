#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, r;
int num[20], res[20], ch[20];

void DFS1(int s, int L)
{
    if (L == r)
    {
        for (int i = 0; i < L; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
        return ;
    }

    else{
        for (int i = s; i <= n; i++)
        {
                res[L] = i;
                DFS1(i + 1, L + 1);
        }
    }
}

void DFS(int s, int L)
{
    if (L == r) {
        for (int i = 0; i < 20; i++) {
            if (ch[i] == 1) {
                cout << i << " ";
            }
        }
        cout << endl;
    } else {
        for (int i = s; i <= n; i++) {
            ch[i] = 1;
            DFS(i + 1, L + 1);
            ch[i] = 0;
        }
    }
}

int main(void)
{
    int i;
    cin >> n >> r;
    
    for (i = 0; i < n; i++)
    {
        num[i] = i;
    }
    DFS(1, 0);

    return 0;
}
