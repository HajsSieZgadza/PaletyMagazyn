#include "Palety.h"
using namespace std;

double Duza::rozmiar()
{
	return 2.5;
}

string Duza::id()
{
	string id;
	cout << "Podaj id palety : ";
	cin >> id;
	return id;
}

string Duza::cecha()
{
	string cecha;
	cout << "Podaj ceche palety : ";
	cin >> cecha;
	return cecha;
}