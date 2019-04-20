#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int x = 1;
    int k;
    
    while ( k < N ) // k < 50
    {
        k = (k*x);
        std::cout << (k) << std::endl;
        k+1;
    }
    return 0;
}
