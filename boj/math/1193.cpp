#include <iostream>
int main() {
    int what_circle = 0;
    int what_index = 0;
    int input;
    int i;
    std::cin >> input;
    for (i = 0; i*(i+1) < 2*input; i++) {
    }
    what_circle = i;
    double before_index = (what_circle - 1) * static_cast<double>(what_circle) / 2;
    what_index = input - static_cast<int>(before_index);
    int cut = what_index;
    if (what_circle % 2 == 0) {
        std::cout << what_index << "/" << what_circle - what_index + 1;        
    } else if (what_circle % 2 != 0) {
        std::cout << what_circle - what_index + 1 << "/" << what_index;     
    }
    return 0;
}