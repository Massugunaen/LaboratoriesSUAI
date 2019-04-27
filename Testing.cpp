#include <iostream>

int main(){
    int n, i;
    std::cin >> n;
    while (i <= n){
        i = i + 1;
        if (n % i == 0){
            std::cout << i << std::endl;
            break;
        }
    }
}
