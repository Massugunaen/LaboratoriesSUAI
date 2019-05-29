#include <iostream>
#include <vector>


int main() {

    std::cout << "input mode" << std::endl;
    std::cout << "supported are: 'auto(a)', 'manual(m)((16_lab))', 'exit(e)'" << std::endl;
    char(input_mode_char);

    while (std::cin >> input_mode_char) {
        switch (input_mode_char) {
            /*this is for training*/
            case 'a': {
                std::cout <<"input size you want to have" << std::endl;
                double size_of_a_array;
                std::cin >> size_of_a_array;
                std::cout << "input the number you want to increase your array" << std::endl;
                double (d);
                std::cin >> d;
                std::vector<double> a_array;
                /*writing*/
                for (double i = 0; i <= size_of_a_array; i+=d) {
                    a_array.push_back(i); ///auto-writing
                }

                /*outputting*/
                for (double i = 0; i <= size_of_a_array; i+=d) {
                    std::cout << a_array[i] << " ";
                }
                std::cout << std::endl;

                break;
            }

            /*this is for 16 laboratory*/
            case 'm': {
                std::cout << "input size of the array" << std::endl;
                int size_of_m_array, counter(0);
                std::cin >> size_of_m_array; //inputting the size
                std::vector <int> m_array(size_of_m_array);
                /*writing numbers*/
                std::cout << "start writing numbers" << std::endl;

                for (int i = 0; i < size_of_m_array; i++) {
                    std::cin >> m_array[i];
                }

                /*filtering*/
                while (counter < size_of_m_array) {
                    for (int i = 0; i < size_of_m_array; i++) {
                        if (m_array[i] == m_array[i+1]) {
                            for (int j = i; j < size_of_m_array - 1; j++) {
                                m_array[j] = m_array[j+1];
                            }
                            m_array[size_of_m_array - 1] = 0;
                        }
                    }
                    counter++;
                }

                /*outputting them*/
                std::cout << "The results are the following:" << std::endl;
                for (int i = 0; i < size_of_m_array; i++) {
                    std::cout << m_array[i] << " ";
                }
                std::cout << std::endl;

                break;
            }

            case 'e': {
                return EXIT_SUCCESS;
            }
        }
    }
}
