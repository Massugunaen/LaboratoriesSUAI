#include <iostream>
#include <string.h>
#define nfio 15
#define NS 6
using std::cin;
using std::cout;
using std::endl;
using std::ofstream;
using std::string;


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
};

int filter(Student input[NS], Student output[NS])
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

int main()
{
    int j, i;
    Student group[NS], filteredGroup[NS];

    cout << "Please input list of students...\n";
    cout << "Example: IvanovII m s p y 19 10 2000 5 5 5 5 5 250\n";
    
    for (i = 0; i < NS; i++)
    {
        cin >> group[i].name;
        cin >> group[i].gender;
        cin >> group[i].education;
        cin >> group[i].address;
        cin >> group[i].grant;
        cin >> group[i].birthday.day;
        cin >> group[i].birthday.month;
        cin >> group[i].birthday.year;

        for (j = 0; j < 5; j++)
        {
            cin >> group[i].mark[j];
        }

        cin >> group[i].examScore;
    }

    int count = filter(group, filteredGroup);

    for (i = 0; i < count; i++)
    {
        cout << filteredGroup[i].name << " ";
        cout << filteredGroup[i].gender << " ";
        cout << filteredGroup[i].education << " ";
        cout << filteredGroup[i].address << " ";
        cout << filteredGroup[i].grant << " ";
        cout << filteredGroup[i].birthday.day << " ";
        cout << filteredGroup[i].birthday.month << " ";
        cout << filteredGroup[i].birthday.year << " ";

        for (j = 0; j < 5; j++)
        {
            cout << filteredGroup[i].mark[j] << " ";
        }

        cout << filteredGroup[i].examScore << "\n";
    }
}
