/*SixthLaboratory_6*/
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int size(0), replacement(0), max_element(0), position(0);
    std::cin >> size >> replacement;
    std::vector <int> array(size);

    for (int i(0); i < size; i++) {
        std::cin >> array[i];
    }

    for (int i(0); i < size; i++) {
        if (max_element < array[i]) {
            max_element = array[i];
            position = i;
        }
    }

    for (int i(0); i < size; i++) {
        if (i > position) {
            array[i] = replacement;
        }
    }

    for (int i(0); i < size; i++) {
        std::cout << array[i] << " ";
    }

    return EXIT_SUCCESS;
}
