#include <iostream>
#include <cmath>
#include <array>

static int n = 5;

int main() {
	std::cout << "Inverse matrix method\n" << std::endl;
	
	/*creating two arrays*/
	double x[n] = {-3.0, -2.3, -1.5, -0.8, 0.1};
	double y[n] = {-0.4, -1.1, -0.38, 0.5, 2.4};
	
	/*outputting first array*/
    for (int i = 0; i < n; i++) {
        std::cout << x[i] << " ";
	}
	std::cout << std::endl;
	
	/*outputting seecond array*/
    for (int i = 0; i < n; i++) {
        std::cout << y[i] << " ";
	}
	std::cout << std::endl;
    
    

}
