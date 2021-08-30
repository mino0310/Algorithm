#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Candidate {
    int paper;
    int interview;
    Candidate(int a, int b)
    {
        paper = a;
        interview = b;
    }
    bool operator<(const Candidate& tmp)const {
        if (paper != tmp.paper)
            return paper < tmp.paper;
        if (interview != tmp.interview) 
            return interview < tmp.interview;
    }
};

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t, n, i, a, b, j,tmp_interview;
    vector<Candidate> v[21];
    cin >> t;

    for (i = 0; i < t; i++)
    {
        cin >> n;
        for (j = 0; j < n; j++) {
            cin >> a >> b;
            v[i].push_back(Candidate(a, b));
        }
        sort(v[i].begin(), v[i].end());
    }

    for (i = 0; i < t; i++)
    {
        int cnt = 1;
        tmp_interview = v[i][0].interview;
        for (j = 0; j < v[i].size(); j++)
        {
            if (v[i][j].interview < tmp_interview){
                cnt++;
                tmp_interview = v[i][j].interview;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

