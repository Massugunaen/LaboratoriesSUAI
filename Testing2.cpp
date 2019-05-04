#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int sum = 0;
    while (i < 1000)
    {
        i++;
        sum += i;
    }
    cout << i << endl; 
    return 0;
}
