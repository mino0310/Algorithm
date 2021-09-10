#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

struct soul_food {
    int pizza;
    int chicken;
};

struct career {
    int junior;
    int senior;
    struct soul_food *f;
};

struct job {
    int backend;
    int frontend;
    struct career *c;
};

struct language {
    int java;
    int python;
    int cpp;
    struct job *j;
};

struct candidate {
    
    string language;
    string job;
    string career;
    string soul_food;
    string score;
    
    candidate(string a, string b, string c, string d, string f){
        language = a;
        job = b;
        career = c;
        soul_food = d;
        score = f;
    }
    bool operator<(const candidate &h)const{
        return stoi(score) < stoi(h.score);
    }
};

vector<string> split(string s, char del){
    string tmp ="";
    vector<string> res;
    for (auto c : s){
        if (c == del) {
            res.push_back(tmp);
            tmp.clear();
        } else {
            tmp += c; 
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<candidate> resume;

    vector<string> info;
    info.push_back("java backend junior pizza 150");
    info.push_back("python frontend senior chicken 210");
    info.push_back("python frontend senior chicken 150");
    info.push_back("cpp backend senior pizza 260");
    info.push_back("java backend junior chicken 80");
    info.push_back("python backend senior chicken 50");
    
    vector<string> query;
    query.push_back("java and backend and junior and pizza 100");
    query.push_back("python and frontend and senior and chicken 200");
    query.push_back("cpp and - and senior and pizza 250");
    query.push_back("- and backend and senior and - 150");
    query.push_back("- and - and - and chicken 100");
    query.push_back("- and - and - and - 150");

    // vector<string> tmp = split(info[0], ' ');
    // for (int i = 0; i < tmp.size(); i++) {
    //     cout << tmp[i] << " 나와라 ";
    // }

    for (int i = 0; i < info.size(); i++){
        vector<string> tmp;
        tmp = split(info[i], ' ');
        cout << "zzz\n";
        resume.push_back(candidate(tmp[0], tmp[1], tmp[2], tmp[3], tmp[4]));
    }

    // sort(resume.begin(), resume.end());

    // for (int i = 0; i < resume.size(); i++){
    //     cout << resume[i].language << " " << resume[i].job << " " << resume[i].career << " " << resume[i].soul_food << " " << resume[i].score << "\n";
    // }
    return 0;
}