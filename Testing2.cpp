#include <iostream>
#include <cmath>
#include <string>

int addition(int a, int b) {
	int add = a + b;
};

int subtraction(int a, int b) {
	int sub = a - b;
};

int multiplication(int a, int b) {
	int multip = a * b;
};

double division(double a, double b) {
	double div = a / b;
};

int divisionwithremainder(int a, int b) {
	int divR = a % b;
};

int main(void) {
	int a, b;
	char c;
	std::cin >> a >> b; // std::cin ONLY '>>'
	std::cin >> c; // std::cin ONLY '>>'
	
	if (c == '+') {
		std::cout << addition(a,b) << std::endl;
	}

	if (c == '-') {
		std::cout << subtraction(a,b) << std::endl;
	}

	if (c == '/') {
		if(b == 0) {
			std::cout << "are you retarded?" << std::endl;
			abort();
		}
		else {
			std::cout << division(a,b) << std::endl;
		}
	}

	if (c == '%') {
		if(b == 0) {
			std::cout << "are you retarded?" << std::endl;
			abort();
		}
		else {
			std::cout << divisionwithremainder(a,b) << std::endl;
		}
	}
	return 0;
};