#include <fstream>
#include <iostream>
#include <stdlib.h>
#define NS 7
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
		for (int i=0;i<NS;i++)
		{
			file.getline(string,50);
			cout << string << endl;
		}
		file.close();
	}
}
