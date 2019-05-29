#include <iostream>


void input (int *a, int *b) {
	std::cin >> a >> b;
}


int main() {
	int a,b;
	std::cout << input(&a,&b);
}
