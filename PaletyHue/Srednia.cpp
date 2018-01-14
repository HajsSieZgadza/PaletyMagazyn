#include "Palety.h"
using namespace std;

double Srednia::rozmiar()
{
	return 1.5;
}

string Srednia::id()
{
	string id;
	cout << "Podaj id palety : ";
	cin >> id;
	return id;
}

string Srednia::cecha()
{
	string cecha;
	cout << "Podaj ceche palety : ";
	cin >> cecha;
	return cecha;
}