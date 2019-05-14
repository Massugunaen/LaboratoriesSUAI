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
	std::string Operations_string = "-a --addition(+)\n-s --substraction(-)\n-m --multiplication(*)\n-d --division(/)\n-dr --division remainder(%)\n-f --factorial(!)\n-h --help\n-e --exit\n";
	std::string Error = "Unknown command, look up in help list\nType '-h' or '--help' for future instructions\n";
	std::string help = Syntax_string + Support_string + Operations_string;
	std::cout << Syntax_string << Support_string << Operations_string;

	std::string line;
	
	while (line != "-e" || line != "--exit") {
		std::cin >> line;

		if (line == "-a" || line == "--addition" || line == "+") {
			
			double a,b;
			std::cout << "Input your first number" << std::endl;
			std::cin >> a;
			std::cout << "Input your second number" << std::endl;
			std::cin >> b;
			std::cout << addition(a,b) << std::endl;
		}

		if (line == "-s" || line == "--substraction"  || line == "-") {
			double a,b;
			std::cout << "Input your first number" << std::endl;
			std::cin >> a;
			std::cout << "Input your second number" << std::endl;
			std::cin >> b;
			std::cout << subtraction(a,b) << std::endl;
		}
		
		if (line == "-m" || line == "--multiplication"  || line == "*") {
			double a,b;
			std::cout << "Input your first number" << std::endl;
			std::cin >> a;
			std::cout << "Input your second number" << std::endl;
			std::cin >> b;
			std::cout << multiplication(a,b) << std::endl;
		}

		if (line == "-d" || line == "--division" || line == "/") {
			double a,b;
			std::cout << "Input your first number" << std::endl;
			std::cin >> a;
			std::cout << "Input your second number" << std::endl;
			std::cin >> b;
			if(b == 0) {
				std::cout << "you can't do that" << std::endl;
				return 1;
			}
			else {
				std::cout << division(a,b) << std::endl;
			}
		}

		if (line == "-dr" || line == "--division remainder" || line == "%") {
			int a,b;
			std::cout << "Input your first number" << std::endl;
			std::cin >> a;
			std::cout << "Input your second number" << std::endl;
			std::cin >> b;
			if(b == 0) {
				std::cout << "you can't do that" << std::endl;
				return 1;
			}
			else {
				std::cout << divisionwithremainder(a,b) << std::endl;
			}
		}
		
		if (line == "-f" || line == "--factorial" || line == "!") {
			int a;
			std::cout << "Input your number" << std::endl;
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
			std::cout << Error;
		}
		
	}
};

