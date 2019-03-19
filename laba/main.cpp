//
//  main.cpp
//  laba
//
//  Created by Roman Timashev on 19/03/2019.
//  Copyright © 2019 Roman Timashev. All rights reserved.
//

#include <iostream>
#include <string.h>
//#include<conio.h>
#define nfio 15
#define NS 7
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

struct Stud
{
    char FIO[nfio];
    char pol, obr, adress, stip;
    Date datar;
    int ocenka[5];
    int kb;
};

int otbor(Stud Z[NS], Stud Z1[NS])
{
    int i, j, flag, n, N = 0;
    flag;
    n = 0;

    for (i = 0; i < NS; i++)
    {
        flag = 1;
        for (j = 0; j < 5; j++)
            if (Z[i].ocenka[j] == 3)
            {
                flag = 0;
                break;
            }
        if ((flag == 1) && (Z[i].datar.month == 12 || Z[i].datar.month == 1 || Z[i].datar.month == 2))
        {
            Z1[n] = Z[i];
            n++;
        }
        N = n;
    }
    return N;
};

int main()
{
    int j, i, s;
    Stud group[NS], group1[NS];

    cout << "Vvedite spisok v vide:\n";
    cout << "Ivanov I.I. m s p y 19 01 2000 55555 250\n";

    for (i = 0; i < NS; i++)
    {
        cin >> group[i].FIO >> group[i].pol >> group[i].obr >> group[i].adress >> group[i].stip >> group[i].datar.day >> group[i].datar.month >> group[i].datar.year;

        for (j = 0; j < 5; j++)
            cin >> group[i].ocenka[j];

        cin >> group[i].kb;
    }

    int counter = otbor(group, group1);

    cout << endl;

    for (i = 0; i < counter; i++)
    {
        cout << group1[i].FIO << " " << group1[i].pol << " " << group1[i].obr << " " << group1[i].adress << " " << group1[i].stip << " " << group1[i].datar.day << " " << group1[i].datar.month << " " << group1[i].datar.year << " ";

        for (j = 0; j < 5; j++)
        {
            cout << group1[i].ocenka[j] << " ";
        }

        cout << group1[i].kb << "\n";
    }
}
