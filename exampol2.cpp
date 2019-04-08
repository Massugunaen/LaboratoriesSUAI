#include <iostream>

using namespace std;

int main()
{
int a, b, c, biggest_number;
cin >> a >> b >> c;

if (a > b)
{
	biggest_number = a;
}
if (biggest_number < b)
{
	biggest_number = b;
}
if (biggest_number < c)
{
	biggest_number = c;
}

cout << biggest_number << endl;




return 0;
}
