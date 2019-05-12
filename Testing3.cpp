#include <iostream>
#include <cmath>

//int isPow2(int a) {
//  return !(a&(a-1));
//}

int main() {
    int N;
    double S;
    std::cin >> N;
    S = pow(N,2);
    
    if (S%2 == 0) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }
    
    return 0;
}
