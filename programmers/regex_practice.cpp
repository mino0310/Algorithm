#include <iostream>
#include <regex>
#include <vector>


using namespace std;
// int main() {
//   std::vector<std::string> phone_numbers = {"010-1234-5678", "010-123-4567",
//                                             "011-1234-5567", "010-12345-6789",
//                                             "123-4567-8901", "010-1234-567"};
//   std::regex re("[01]{3}-\\d{3,4}-\\d{4}");
//   for (const auto &number : phone_numbers) {
//     std::cout << number << ": " << std::boolalpha
//               << std::regex_match(number, re) << '\n';
//   }
// }


int main() {
    std::vector<std::string> phone_numbers = {"010-1234-5678", "010-123-4567",
                                            "011-1234-5567", "010-12345-6789",
                                            "123-4567-8901", "010-1234-567"};

    
    regex re("[01]{3}-(\\d{3,4})-\\d{4}");
    smatch match;  // 매칭된 결과를 string 으로 보관
    
    for (const auto &number : phone_numbers){
        if (regex_match(number, match, re)) {
            for (size_t i = 0; i < match.size(); i++) {
                cout << "Match : " << match[i].str() << std:: endl;
                cout << "test!!!\n";
                cout << match[0] << endl;
                cout << match[1] << endl;

            }
        }
    }
}