#include <iostream>
#include <string.h>
#include <fstream>
#include <conio.h>
#define nfio 15
#define NS 6
using namespace std;

struct date
{
int day;
int month;
int year;
};

struct stud
{
char fio[nfio];
char pol, obr, adress, stip;
date datar;
int ocenka[5];
int kb;

void InputData()
{
cin >> fio >> pol >> obr >> adress >> stip >> datar.day >> datar.month >> datar.year;

for (int j = 0; j < 5; j++)
{
    cin >> ocenka[j];
}    
    cin >> kb;
};

void WriteDataToFile ( ofstream & file )
{
file << fio << " " << pol << " " << obr << " " << adress << " " << stip << " " << datar.day << " " << datar.month << " " << datar.year << " ";

for (int j = 0; j < 5; j++)
{
    file << ocenka[j] << " ";
}
        
file << kb << " " << endl;
};
};


int main()
{

cout<<"vvedite spisok v vide:\n"<<endl;
cout<<"Ivanov_I.I. m s p y 19 01 2000 5 5 5 5 5 250\n"<< endl;
stud students [NS];
for (int i = 0; i < NS; i++)
{
    students[i].InputData();
}
ofstream file;
char directiva [60];
char nazvanie [20];
cout << "vvedite directivu" << endl;
cin >> directiva;
cout << "vvvedite nazvanie" << endl;
cin >> nazvanie;
strcat(directiva,nazvanie);
file.open(directiva);

if(!file)
{
    cout << "nepravilnii tip ili imya faila" << endl;
    return 1;
}
    
else
{
    cout << "zapisivaem dannie" << endl;
    for (int i=0; i<NS; i++)
    {
        students[i].WriteDataToFile(file);
    }
    file.close();
}
getch();
}
