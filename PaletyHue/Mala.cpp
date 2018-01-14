#include "Palety.h"
using namespace std;

double Mala::rozmiar()
{
	return 0.5;
}

string Mala::id()
{
	string id;
	cout << "Podaj id palety : ";
	cin >> id;
	return id;
}

string Mala::cecha()
{
	string cecha;
	cout << "Podaj ceche palety : ";
	cin >> cecha;
	return cecha;
}