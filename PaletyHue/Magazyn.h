#ifndef Magazyn_h
#define Magazyn_h
#include "Palety.h"

#include <iostream>
#include <string>
#include <vector>
class Magazyn
{
public:
	std::vector<Magazyn> mag;
	Palety* bob;
	std::string cechaa, idd;
	double rozmiarr;
	Magazyn() {};
	Magazyn(std::string _cecha, std::string _id, double _rozmiar)
	{
		cechaa = _cecha;
		idd = _id;
		rozmiarr = _rozmiar;
	}
	Magazyn(Palety *pal)
	{
		bob = pal;
	}
	void wyswietl(std::string s);
	void wczytaj(std::string s);
	void zapisz(std::string s);
	void dodaj( Palety *wsk);
	void usun(std::string s);
	double miejsce();
	int magSize();

};


#endif // !Magazyn_h
