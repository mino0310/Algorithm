#include <iostream>
#include <stack>
#include <vector>
#include <map>
#include <algorithm>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::set<std::string> set;
    std::set<std::string>::iterator it;
    std::stack<std::string> res;
    std::string name, log;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cin >> name >> log;
        if (log == "enter"){
            set.insert(name);
        } else if (log == "leave") {
            set.erase(name);
        }
    }
    for (it = set.begin(); it != set.end(); it++){
        res.push(*it);
    }
    while (!res.empty()){
        std::cout << res.top() << "\n";
        res.pop();
    }

}

// 백만개의 맵을 다 탐색하기에는 무리가 있다. 
// 수 자체를 줄일 필요가 있음.

