/*SixthLaboratory_9*/
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int size(0), counter(0);
    double sum(0);
    std::cin >> size;
    std::vector <int> array(size);

    for (int i(0); i < size; i++) {
        std::cin >> array[i];
    }

    for (int j(0); j < size; j++) {
            for (int i(0); i < size; i++) {
                if (abs(array[i]) < abs(array[i+1])) {
                    int min_abs = array[i];
                    array[i] = array[i+1];
                    array[i+1] = min_abs;
            }
        }
    }

    for (int i(0); i < size; i++) {
        if (array[i] > 0) {
            counter++;
        }
    }

    for (int i(0); i < size; i++) {
        if (array[i] > 0) {
            sum += array[i];
        }
    }

    for (int i(0); i < size; i++) {
            std::cout << array[i] << " ";
    }

    std::cout << std::endl;
    std::cout << (sum/counter) << std::endl;

    return EXIT_SUCCESS;
}
