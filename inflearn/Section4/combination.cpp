#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int n, r;
int num[20], res[20];

void DFS(int s, int L)
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
        for (int i = s; i < n; i++)
        {
                res[L] = i;
                DFS(i + 1, L + 1);
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
    DFS(0, 0);

    return 0;
}
