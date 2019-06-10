/*SixthLaboratory_5*/
#include <iostream>
#include <vector>

int main() {
    int size(10);
    std::vector <int> first_array(size);
    std::vector <int> second_array(size);
    std::vector <int> final_array(size);

    for (int i(0); i < size; i+=2) {
        std::cin >> first_array[i];
    }

    for (int i(1); i < size; i+=2) {
        std::cin >> second_array[i];
    }

    for (int i(0); i < size; i+=2) {
        final_array[i] = first_array[i];
    }

    for (int i(1); i < size; i+=2) {
        final_array[i] = second_array[i];
    }

    for (int i(0); i < size; i++) {
        std::cout << final_array[i] << " ";
    }
    return EXIT_SUCCESS;
}
