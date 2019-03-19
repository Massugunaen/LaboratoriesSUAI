//
//  main.cpp
//  laba
//
//  Created by Roman Timashev on 19/03/2019.
//  Copyright © 2019 Roman Timashev. All rights reserved.
//

#include <iostream>
#include <string.h>
#define nfio 15
#define NS 7
using namespace std;

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
    int i, j, flag, n, N = 0;
    flag;
    n = 0;

    for (i = 0; i < NS; i++)
    {
        flag = 1;
        for (j = 0; j < 5; j++) {
            if (input[i].mark[j] == 3)
            {
                flag = 0;
                break;
            }
        }
            
        if ((flag == 1) && (input[i].birthday.month == 12 || input[i].birthday.month == 1 || input[i].birthday.month == 2))
        {
            output[n] = input[i];
            n++;
        }
        N = n;
    }
    return N;
};

int main()
{
    int j, i, s;
    Student group[NS], filteredGroup[NS];

    cout << "Vvedite spisok v vide:\n";
    cout << "IvanovII m s p y 19 10 2000 5 5 5 5 5 250\n";
    
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

    int counter = filter(group, filteredGroup);

    for (i = 0; i < counter; i++)
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
