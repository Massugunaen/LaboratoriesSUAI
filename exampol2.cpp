
#include <fstream>
#include <iostream>
using namespace std;
 
int main(void)
{ 
    char buff[50]; 
    ifstream fin("cppstudio.txt");
 
    fin >> buff;
    cout << buff << endl;
 
    fin.getline(buff, 50);
    fin.close();
    cout << buff << endl;
 
    system("pause");
    return 0;
}
