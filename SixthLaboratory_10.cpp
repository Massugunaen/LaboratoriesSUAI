/*SixthLaboratory_10*/
#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int size(0), condition(0), multiply(0);
    std::cin >> size >> condition >> multiply;
    std::vector <int> array(size);

    for (int i(0); i < size; i++) {
        std::cin >> array[i];
    }

    for (int i(0); i < size; i++) {
        if (array[i] < condition) {
            for (int j(0); j < size; j++) {
                if (array[j] < 0) {
                    array[j] = pow(array[j],2);
                }
            }
        }
        else {
            array[i] = array[i] * multiply;
        }
    }

    for (int i(0); i < size; i++) {
        std::cout << array[i] << " ";
    }
}
