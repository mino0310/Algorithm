#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;
int unf[10001];

struct Edge{
    int v1, v2, val;
    Edge(int a, int b, int c) {
        v1 = a;
        v2 = b;
        val = c;
    }
    bool operator<(Edge &b){
        return val < b.val;
    }
};

int Find(int v)
{
    if (v == unf[v]) return v;
    else return unf[v] = Find(unf[v]);
}

void Union(int a, int b)
{
    a = Find(a);
    b = Find(b);
    if (a != b) unf[a] = b;
}


int main(void)
{
    int v, e, city_a, city_b, cost, i, res, cnt;
    vector<Edge> Ed;

    res = cnt = 0;

    cin >> v >> e;
    for (i = 1; i <= e; i++) {
        unf[i] = i;
    }
    for (i = 0; i < e; i++)
    {
        cin >> city_a >> city_b >> cost;
        Ed.push_back(Edge(city_a, city_b, cost));
    }
    sort(Ed.begin(), Ed.end());
    for (i = 0; i < m; i++)
    {
        int fa = Find(Ed[i].v1);
        int fb = Find(Ed[i].v2);
        if (fa != fb) {
            res += Ed[i].cost;
            Union(Ed[i].v1, Ed[i].v2);
        }
    }
    cout << res + 1 << endl;
    cout << res << endl;
    return 0;
}