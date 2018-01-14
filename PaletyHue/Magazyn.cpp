#include "Magazyn.h"
using namespace std;
#include <sstream>
#include <fstream>

void Magazyn::wczytaj(std::string s)
{
	ifstream wczyt(s);
	string linie;
		while (getline(wczyt, linie))
		{
			stringstream wczytaj(linie);
			string cecha1, id1;
			double rozmiar1;
			wczyt >> rozmiar1;
			wczyt.ignore();
			wczyt >> id1;
			wczyt.ignore();
			wczyt >> cecha1;

			mag.push_back(Magazyn(cecha1,id1,rozmiar1));
		}
	wczyt.close();
}

void Magazyn::wyswietl(std::string s)
{
	for (int i = 0;i < magSize(); i++)
	{
		cout << mag[i].idd << " " << mag[i].cechaa << endl;
	}
	cout << "Zajete miejsce : " << miejsce();
}

void Magazyn::zapisz(std::string s)
{
	ofstream zapis(s);
	for (int i = 0; i < magSize(); i++)
	{
		zapis << cechaa << " " << idd << " " << rozmiarr << endl;
	}
}
void Magazyn::dodaj(Palety *wsk)
{
	mag.push_back(Magazyn(wsk->cecha(), wsk->id(), wsk->rozmiar()));
}
void Magazyn::usun(std::string s) //usun ostatnio dodana palete
{
	mag.pop_back();
}

double Magazyn::miejsce()
{
	double suma = 0;
	for (int i = 0; i < magSize(); i++)
	{
		suma = suma + mag[i].rozmiarr;
	}
	return suma;
}

int Magazyn::magSize()
{
	return mag.size();
}