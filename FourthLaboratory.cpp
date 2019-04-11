#include <iostream>
#include <string.h>
#include <fstream>
#define nfio 15
#define NS 6

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
    	std::cin >> name;
        std::cin >> gender;
        std::cin >> education;
        std::cin >> address;
        std::cin >> grant;
        std::cin >> birthday.day;
        std::cin >> birthday.month;
        std::cin >> birthday.year;
        
        for (int j = 0; j < 5; j++)
        {
            std::cin >> mark[j];
        }
        std::cin >> examScore;
	};

	void WriteDataToFile (std::ofstream & file )
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
    
        file << examScore << " " << std::endl;
	};
};

int filter (Student input[NS], Student output[NS])
{
    int n = 0;

    for (int i = 0; i < NS; i++)
    {
        bool getGrant = input[i].grant == 'n';
        bool matchExamScore = input[i].examScore > 20;

        if (getGrant && matchExamScore)
        {
            output[n] = input[i];
            n++;
        }
    }    
    return n;
};

int main (void)
{
    std::cout << "Please input list of students..." << std::endl;
    std::cout << "Example: IvanovII m s p y 19 10 2000 5 5 5 5 5 250" << std::endl;
    Student Students [NS];

    for (int i = 0; i < NS; i++)
    {
        Students[i].InputData();
    }
    std::ofstream file;
    char directory [60];
    char filename [20];
    std::cout << "Enter files' directory" << std::endl;
    std::cin >> directory;
    std::cout << "Enter files' name" << std::endl;
    std::cin >> filename;
    strcat ( directory, filename );
    file.open( directory );

    if( !file )
    {
        std::cout << "Wrong files' name or Direction" << std::endl;
        return 1;
    }
    
    else
    {
        std::cout << "Writing data to File..." << std::endl;
        for (int i=0; i<NS; i++)
        {
            Students[i].WriteDataToFile(file);
        }
	    file.close();
		
		char string[500];
		std::ifstream file (directory);
		{
			for (int i=0;i<NS;i++)
			{
				file.getline(string,500);
				std::cout << string << std::endl;
			}
			file.close();
		}
	}
		
return 0;
}
