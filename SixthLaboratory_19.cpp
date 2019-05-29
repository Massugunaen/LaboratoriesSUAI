#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n = 0;
    int counter = 0;
    std::cin >> n;
    vector <int> x(n);



    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    /*filtering*/
    while (counter < n) {
        for (int i = 0; i < n; i++) {
            if (x[i] == 0) {
                for (int j = i; j < n - 1; j++) {
                    x[j] = x[j+1];
                }
                x[n-1] = 0;
            }
        }
        counter++;
    }



    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
}
