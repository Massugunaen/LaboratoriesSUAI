#include <iostream>
#include <vector>
#include <string>

int main() {

    std::cout << "input mode" << std::endl;
    std::cout << "supported are: 'auto(a)', 'manual(m) /*For16Lab*/', 'exit(e)'" << std::endl;
    char(input_mode_char);

    while (std::cin >> input_mode_char) {
        switch (input_mode_char) {
            /*this is for training*/
            case 'a': {
                std::cout <<"input size you want to have" << std::endl;
                int size_of_a_array(0);
                std::cin >> size_of_a_array;
                std::cout << "input the number you want to increase your array" << std::endl;
                double d(0);
                std::cin >> d;
                std::vector<double> a_array;
                a_array.reserve(size_of_a_array);
                /*writing*/
                for (double i(0); i < size_of_a_array; i++) {
                    a_array.push_back(i); ///auto-writing
                }

                for (double i(0); i < size_of_a_array; i++) {
                    std::cout << a_array[i] << " ";
                }
                std::cout << std::endl;
                break;
            }

            /*this is for 16 laboratory*/
            case 'm': {
                std::cout << "input size of the array" << std::endl;
                int size_of_m_array(0);
                std::cin >> size_of_m_array; //inputting the size
                std::vector<int> m_array;
                m_array.reserve(size_of_m_array);

                std::basic_string<char> input_stop_signal;
                while (input_stop_signal != "stop") {
                    std::cout << "type anything to start writing numbers or type 'stop' to stop the process"<<std::endl;
                    std::cin >> input_stop_signal;

                    if (input_stop_signal == "stop") {
                        return EXIT_SUCCESS;
                    }

                    else if (input_stop_signal != "stop") {
                        std::cout << "start writing numbers" << std::endl;
                        for (int i(0); i < size_of_m_array; i++) {
                            std::cin >> m_array[i];
                        }

                        for (int k(0); k < size_of_m_array; k++) {
                            for (int i(0); i < size_of_m_array; i++) {
                                if (m_array[i] == m_array[i+1]) {
                                    for (int j(i); j < size_of_m_array; j++) {
                                        m_array[j] = m_array[j+1];
                                    }
                                    m_array[size_of_m_array - 1] = 0;
                                }
                            }
                        }

                        std::cout << "The results are the following:" << std::endl;
                        for (int i(0); i < size_of_m_array; i++) {
                            std::cout << m_array[i] << " ";
                        }
                        std::cout << std::endl;
                    }
                }
            }

            case 'e': {
                return EXIT_FAILURE;
            }
        }
    }
}
