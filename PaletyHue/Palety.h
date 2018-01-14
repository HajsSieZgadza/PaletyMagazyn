#ifndef Palety_h
#define Palety_h
#include <iostream>
#include <string>

class Palety
{
public:
	virtual double rozmiar() = 0;
	virtual std::string id() = 0;
	virtual std::string cecha() = 0;
};

class Duza : public Palety
{
public:
	virtual double rozmiar() ;
	virtual std::string id() ;
	virtual std::string cecha() ;
};
class Srednia : public Palety
{
public:
	virtual double rozmiar();
	virtual std::string id();
	virtual std::string cecha();
};
class Mala : public Palety
{
public:
	virtual double rozmiar();
	virtual std::string id();
	virtual std::string cecha();
};

#endif // !Palety_h
