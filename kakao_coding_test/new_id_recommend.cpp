#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

#include <string>
#include <vector>

using namespace std;

string to_small_letter(string& str){
    string tmp ="";
    for (auto c : str){
        if (c >= 'A' && c <= 'Z') {
            tmp += c + 32;
        } else {
            tmp += c;
        }
    }
    return tmp;
}

string delete_special_character(string str){
    string tmp = "";
    for (auto c : str) {
        if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || c == '-' || c == '_' || c == '.'){
            tmp += c;
        }
    }
    return tmp;
}

string delete_comma(string str){
    string tmp = "";
    for (int i = 0; i < str.size(); i++){
        if (str[i] == '.' && str[i+1] == '.') {
            continue;
        } else
            tmp += str[i];
    }
    return tmp;
}

void delete_front_back_comma(string& str) {
    if (str.front() == '.') str.erase(str.begin());
    if (str.back() == '.') str.erase(str.end() - 1);
}

string solution(string new_id) {
    string answer = "";
    answer = to_small_letter(new_id);
    answer = delete_special_character(answer);
    answer = delete_comma(answer);
    delete_front_back_comma(answer);
    if (answer.length() == 0) 
        answer = "a";
    if (answer.length() >= 16){
        while (answer.length() != 15) {
            answer.erase(answer.begin() + 15);
        }
    }
    if (answer.back() == '.') answer.erase(answer.end() - 1);
    
    if (answer.length() <= 2) {
        while (answer.length() != 3) {
            answer += answer.back();
        }
    }
    return answer;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    return 0;
}