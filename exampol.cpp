#include <iostream>
#include <stdlib.h>

using namespace std;

int main (void)
{
int age;

cin >> age;

if ( 14 > age < 18)
{
	cout << "This guy is between 14 and 18" << endl;
}
else if (0 > age < 14)
{
	cout << "This guy is between 0 and 14" << endl;
}
else 
{
	if (age < 0)
	cout << "This guy is retarded" << endl;
}
}
