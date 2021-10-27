#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;
map<string, int> map1;
int ch[21], res[21];
vector<string> all;

void combination(int s, int L, string str, int size){
    if (L == size){
        string tmp;
        for (int i = 0; i < size; i++) {
            tmp += str[res[i]];
        }
        map1[tmp]++;
        return ;
    } else {
        for (int i = s; i < size; i++){
            ch[i] = 1;
            combination(s+1, L+1, str, size);   
        }   
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0):
    cout.tie(0);

    
}


// vector<string> solution(vector<string> orders, vector<int> course) {
//     vector<string> answer;
//     for (auto str : orders) {
//         combination(0, 0, str, str.size());
//     }
//     map<string, int>::iterator it;
//     for (it = map1.begin(); it != map1.end(); it++){
//         cout << it->first << endl;
//     }
//     // return answer;
// }