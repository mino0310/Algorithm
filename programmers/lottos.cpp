#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int min_cnt = 0;
    int max_cnt = 0;
    int zero_cnt = 0;
    int max_rank;
    int min_rank;
    
    sort(lottos.begin(), lottos.end());
    sort(win_nums.begin(), win_nums.end());
    
    for (int i = 0; i < lottos.size(); i++){
        if (lottos[i] == 0) zero_cnt++;
    }
    for (int i = 0; i < lottos.size(); i++){
        for (int j = 0; j < win_nums.size(); j++){
            if (lottos[i] == win_nums[j]) {
                min_cnt++;
                max_cnt++;
                cout << "같음\n";
                break ;
            }
        }
    }
    max_cnt += zero_cnt;
    cout << "max cnt = " << max_cnt << " min cnt = " << min_cnt << "\n";
    if (max_cnt == 6) max_rank = 1;
    else if (max_cnt == 5) max_rank = 2;
    else if (max_cnt == 4) max_rank = 3;
    else if (max_cnt == 3) max_rank = 4;
    else if (max_cnt == 2) max_rank = 5;
    else max_rank = 6;

    if (min_cnt == 6) min_rank = 1;
    else if (min_cnt == 5) min_rank = 2;
    else if (min_cnt == 4) min_rank = 3;
    else if (min_cnt == 3) min_rank = 4;
    else if (min_cnt == 2) min_rank = 5;
    else min_rank = 6;
    answer.push_back(max_rank);
    answer.push_back(min_rank);

    return answer;
}

int main(void)
{
    vector<int>lottos, win_num, res;
    int tmp;

    for (int i = 0; i < 6; i++){
        cin >> tmp;
        lottos.push_back(tmp);
    }
    for (int i = 0; i < 6; i++){
        cin >> tmp;
        win_num.push_back(tmp);
    }
    
    res = solution(lottos, win_num);
    for (auto a : res){
        cout << a << " ";
    }

    return 0;
}