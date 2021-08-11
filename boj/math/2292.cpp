#include <iostream>

int return_circle(int n) {
    int i;

    if (n == 1) return 1;

    for (i = 0;; i++) {
        if (2 + 3*i*(i-1) > n){
            return i;
        }
    }
    return 999;
}

int main() {
    
    int i;

    std::cin >> i;
    std::cout << return_circle(i);
    return 0;
}