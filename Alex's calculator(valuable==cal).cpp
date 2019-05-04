#include <iostream>
#include <cmath>
#include <string>

int addition(int a, int b) {
	int add = a + b;
	return add;
};

int subtraction(int a, int b) {
	int sub = a - b;
	return sub;
};

int multiplication(int a, int b) {
	int multip = a * b;
	return multip;
};

double division(double a, double b) {
	double div = a / b;
	return div;
};

int divisionwithremainder(int a, int b) {
	int divR = a % b;
	return divR;
};

int main(void) {
	std::cout << "Alex's calculator at your service!" << std::endl;
	std::cout << "Syntax: [number][number][operator]" << std::endl;
	std::cout << "Supported operators at present, are the following:" << std::endl;
	std::cout << "-" << std::endl;
	std::cout << "+" << std::endl;
	std::cout << "*" << std::endl;
	std::cout << "/" << std::endl;
	std::cout << "%" << std::endl;
	
	int a, b;
	char c;
	std::cin >> a >> b >> c; // std::cin ONLY '>>', retard
	
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
