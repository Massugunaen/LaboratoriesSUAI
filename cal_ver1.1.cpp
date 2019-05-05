#include <iostream>
#include <cmath>
#include <string>
#include <conio.h>
#include <stdio.h>

double addition(double a, double b) {
	double add = a + b;
	return add;
};

double subtraction(double a, double b) {
	double sub = a - b;
	return sub;
};

double multiplication(double a, double b) {
	double multip = a * b;
	return multip;
};

double division(double a, double b) {
	double div = a / b;
	return div;
};

double divisionwithremainder(int a, int b) {
	double divR = a % b;
	return divR;
};

long double factorial(int a) {
	if (a < 0) {
		return 0;
	}
	if (a == 0) {
		return 1;
	}
	else {
		return a*factorial(a-1);
	}
};

int main(void) {
	std::cout << "Alex's calculator at your service!\n" << std::endl;

	std::string Syntax_string = "Syntax: [command][number][number]\n";
	std::string Support_string = "Supported operations:\n";
	std::string Operations_string = "-a --addition\n-s --substraction\n-m --multiplication\n-d --division\n-dr --division remainder\n-f --factorial\n-h --help\n-e --exit\n";
	std::string Error1 = "Unknown command, look up in help list\nType '-h' or '--help' for future instructions";
	std::string help = Syntax_string + Support_string + Operations_string;
	std::cout << Syntax_string << Support_string << Operations_string;

	char c;
	std::string line;
	
	while (line != "-e" || line != "--exit") {
		std::cin >> line;

		if (line == "-a" || line == "--addition") {
			double a,b;
			std::cin >> a >> b;
			std::cout << addition(a,b) << std::endl;
		}
		else {
			std::cout << "" << std::endl;
		}

		if (line == "-s" || line == "--substraction") {
			double a,b;
			std::cin >> a >> b;
			std::cout << subtraction(a,b) << std::endl;
		}
		
		if (line == "-m" || line == "--multiplication") {
			double a,b;
			std::cin >> a >> b;
			std::cout << multiplication(a,b) << std::endl;
		}

		if (line == "-d" || line == "--division") {
			double a,b;
			std::cin >> a >> b;
			if(b == 0) {
				std::cout << "you can't do that" << std::endl;
				return 1;
			}
			else {
				std::cout << division(a,b) << std::endl;
			}
		}

		if (line == "-dr" || line == "--division remainder") {
			int a,b;
			std::cin >> a >> b;
			if(b == 0) {
				std::cout << "you can't do that" << std::endl;
				return 1;
			}
			else {
				std::cout << divisionwithremainder(a,b) << std::endl;
			}
		}
		
		if (line == "-f" || line == "--factorial") {
			int a;
			std::cin >> a;
			std::cout << factorial(a) << std::endl;
		}
		
		if (line == "-h" || line == "--help") {
			std::cout << help;
		}

		if (line == "-e" || line == "--exit") {
			return 0;
		}

		else {
			std::cout << Error1 << std::endl;
		}
	}
};
