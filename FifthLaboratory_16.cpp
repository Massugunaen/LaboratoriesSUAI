#include <iostream>
#include <cmath>

int global_m;

double cycle_for(void) {
	std::cin >> global_m;
	double Y[global_m];
	for (int i = 0; i < global_m ; i++) {
		if (i < 3) {
			std::cin >> Y[i];	
		}
		else {
			Y[i] = (pow(tan(Y[i-1]),2)) + Y[i-3];
		}
	}
	return Y[global_m-1];
}

double cycle_while (void) {
	int i = 0;
	std::cin >> global_m;
	double Y[global_m];
	while (i < global_m) {
		if (i < 3) {
			std::cin >> Y[i];	
		}
		else {
			Y[i] = (pow(tan(Y[i-1]),2)) + Y[i-3];
		}
		i++;
	}
	return Y[global_m-1];
}

double cycle_do_while (void) {
	int i = 0;
	std::cin >> global_m;
	double Y[global_m];
	do {
		if (i < 3) {
			std::cin >> Y[i];	
		}
		else {
			Y[i] = (pow(tan(Y[i-1]),2)) + Y[i-3];
		}
		i++;
	} while (i < global_m);
	return Y[global_m-1];
}

int main(void) {
	double Y[global_m];
	std::cout << cycle_for() << std::endl;
	std::cout << cycle_while() << std::endl;
	std::cout << cycle_do_while() << std::endl;
}
