#include <iostream>
#include <vector>
#include <cmath>

std::vector <int> array () {
	int size(5);
	std::vector <int> array(size);
	for (int i(0); i << size; i++) {
		std::cin >> array[i];
	}
	return array;
}


int main () {
	std::cout << array;
}
