#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

string first_split(string s){
    string tmp ="";
    string res;
    int i = 0;
    while (s[i] != ' ') {
        tmp += s[i];
        i++;
    }
    return tmp;
}

string split(string s){
    string tmp ="";
    string res;
    int i = 0;
    while (s[i] != ' ') i++;
    i++;
    for (; i < s.size(); i++){
        tmp += s[i];
    }
    return tmp;
}

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    vector<string> ndoubled_report;
    
    map<string, int> reported_res; // 신고한 것의 처리 결과.
    map<string, int> total_cnt;
    // 신고 목록 중복 제거
    report.erase(unique(report.begin(), report.end()), report.end());

    // 신고된 개수 카운트
    for (int i = 0; i < report.size(); i++) {
        string tmp = split(report[i]);
        reported_res[tmp]++;
        // cout << tmp << "는 신고되었습니다 \n";
    }
    cout << "now neo = " << total_cnt["neo"] << endl;
    // k번 이상 신고 먹은 사람 정지시키기
    map<string, int>::iterator it;
    // for (it = reported_res.begin(); it != reported_res.end(); it++) {
    //     if(it->second >= k) {
    //         total_cnt[it->first]++;
    //         cout << it->first << "유저는 신고 2회가 누적되어 정지되었습니다. \n";
    //     }
    // }
    // cout << "now2 neo = " << total_cnt["neo"] << endl;

    // 다시 신고목록 반복하면서 내가 신고한 사람이 정지 되었으면 cnt 증가

    for (int i = 0; i < report.size(); i++) {
        string first, second;
        first = first_split(report[i]);
        second = split(report[i]);
        if (reported_res[second] >= k) {
            total_cnt[first]++;
            cout << first << "님이 신고하신 " << second << " 유저가 정지되어 통보드립니다 \n";
            cout << "현재까지 누적된 통보개수는 " << total_cnt[first] << endl;
        }
    }

    for (int i = 0; i < id_list.size(); i++) {
        answer.push_back(total_cnt[id_list[i]]);
        cout << id_list[i] << "의 누적 현황은 = " <<  total_cnt[id_list[i]] << endl;
    }
    return answer;
}

int main(){
    vector<string>id_list, report;
    vector<int> res;
    report.push_back("muzi frodo");
    report.push_back("apeach frodo");
    report.push_back("frodo neo");
    report.push_back("muzi neo");
    report.push_back("apeach muzi");



    id_list.push_back("muzi");
    id_list.push_back("frodo");
    id_list.push_back("apeach");
    id_list.push_back("neo");

    res = solution(id_list, report, 2);

    // for (int i = 0; i < res.size(); i++)
    // {
    //     cout << res[i] << " ";
    // }




    return 0;
}
