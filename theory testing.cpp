/*theory testing*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main () {
    int n = 0, counter = 0, max_el = 0;
    cin >> n;
    vector <int> array(n);

    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        if (max_el < array[i]) {
            max_el = array[i];
        }
    }

    for (int i = 0; i < n; i++) {
        if (max_el == array[i]) {
            counter++;
        }
    }

    cout << max_el << endl;
    cout << counter << endl;
}
