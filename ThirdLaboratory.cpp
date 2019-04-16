#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(void)
{
	char string[50];
	ifstream file ("D:\\study\\students\\ListOfStudents.txt");
	if(!file)
	{
		cout << "No file in such directory" << endl;
		abort();
	}
	else
	{
		for (int i=0;i<6;i++)
		{
			file.getline(string,50);
			cout << string << endl;
		}
		file.close();
	}
}
