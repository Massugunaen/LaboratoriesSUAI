#include <iostream>

using namespace std;

int f(int n){
	return n * 10 + 5;
}

int main(){
	std::cout << f(f(f(10))) << std::endl;
}
