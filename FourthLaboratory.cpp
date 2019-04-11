#include <iostream>
#include <string.h>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#define nfio 15
#define NS 6

using namespace std;

//using std::cin;
//using std::cout;
//using std::endl;
//using std::ofstream;
//using std::ifstream;
//using std::string;
//using std::getline;

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[nfio];
    char gender, education, address, grant;
    Date birthday;
    int mark[5];
    int examScore;
    
    void InputData()
    {
    	cin >> name;
        cin >> gender;
        cin >> education;
        cin >> address;
        cin >> grant;
        cin >> birthday.day;
        cin >> birthday.month;
        cin >> birthday.year;

        for (int j = 0; j < 5; j++)
        {
            cin >> mark[j];
        }

        cin >> examScore;
	};

	void WriteDataToFile ( ofstream & file )
	{
		file << name << " ";
		file << gender << " ";
		file << education << " ";
		file << address << " ";
		file << grant << " ";
		file << birthday.day << " ";
		file << birthday.month << " ";
        file << birthday.year << " ";

        for (int j = 0; j < 5; j++)
        {
            file << mark[j] << " ";
        }
        
        file << examScore << " " << endl;
	};
};


int main (void)
{

    cout << "Please input list of students..." << endl;
    cout << "Example: IvanovII m s p y 19 10 2000 5 5 5 5 5 250" << endl;
    Student Students [NS];

    for (int i = 0; i < NS; i++)
    {
        Students[i].InputData();
    }
    ofstream file;
    char directory [60];
    char filename [20];
    cout << "Enter files' directory" << endl;
    cin >> directory;
    cout << "Enter files' name" << endl;
    cin >> filename;
    strcat ( directory, filename );
    file.open( directory );

    if( !file )
    {
        cout << "Wrong files' name or Direction" << endl;
        return 1;
    }
    
    else
    {
        cout << "Writing data to File..." << endl;
        for (int i=0; i<NS; i++)
        {
            Students[i].WriteDataToFile(file);
        }
	    file.close();
		
		char string[500];
		ifstream file (directory);
		{
			for (int i=0;i<NS;i++)
			{
				file.getline(string,500);
				cout << string << endl;
			}
			file.close();
		}
	}
	
	
	
	return 0;
}
