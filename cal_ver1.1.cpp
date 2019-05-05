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
	std::string Operations_string = "+ --addition\n- --substraction\n* --multiplication\n/ --division\n% --division remainder\nf --factorial\nh --help\ne --exit\n";
	std::string help = Syntax_string + Support_string + Operations_string;
	std::cout << Syntax_string << Support_string << Operations_string;

	char c;
	while (c!='e'/*||*/){
		
		std::cin >> c;

		if (c == '+'/*||*/) {
			double a,b;
			std::cin >> a >> b;
			std::cout << addition(a,b) << std::endl;
		}

		if (c == '-'/*||*/) {
			double a,b;
			std::cin >> a >> b;
			std::cout << subtraction(a,b) << std::endl;
		}
		
		if (c == '*'/*||*/) {
			double a,b;
			std::cin >> a >> b;
			std::cout << multiplication(a,b) << std::endl;
		}

		if (c == '/'/*||*/) {
			double a,b;
			std::cin >> a >> b;
			if(b == 0) {
				std::cout << "you can't do that'" << std::endl;
				abort();
			}
			else {
				std::cout << division(a,b) << std::endl;
			}
		}

		if (c == '%'/*||*/) {
			int a,b;
			std::cin >> a >> b;
			if(b == 0) {
				std::cout << "you can't do that'" << std::endl;
				abort();
			}
			else {
				std::cout << divisionwithremainder(a,b) << std::endl;
			}
		}
		
		if (c == 'f'/*||*/) {
			int a;
			std::cin >> a;
			std::cout << factorial(a) << std::endl;
		}
		
		if (c == 'h'/*||*/) {
			std::cout << help;
		}
	}
};
