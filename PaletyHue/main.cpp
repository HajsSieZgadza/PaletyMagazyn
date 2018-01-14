#include"Magazyn.h"
#include"Palety.h"
#include <iostream>
#include <string>

using namespace std;

	void wyborPol(char wybor, char wybor2, string stream, string a, string b, string c, string a1, string b1, string c1, string a2, string b2, string c2) {
		switch (wybor) //WYBIERANIE ALEJKI I POLKI
		{
		case '1':
		{
			if (wybor2 == '1') stream = a;
			if (wybor2 == '2') stream = b;
			if (wybor2 == '3') stream = c;
		}
		break;
		case '2':
		{
			if (wybor2 == '1') stream = a1;
			if (wybor2 == '2') stream = b1;
			if (wybor2 == '3') stream = c1;
		}
		break;
		case '3':
		{
			if (wybor2 == '1') stream = a2;
			if (wybor2 == '2') stream = b2;
			if (wybor2 == '3') stream = c2;
		}
		}
	}

	void indeksy(char wybor, char wybor2,int *a, int *b)
	{
		switch (wybor)
		{
		case '1':
		{
			if (wybor2 == '1') { *a = 0; *b = 0; }
			if (wybor2 == '2') { *a = 0; *b = 1; }
			if (wybor2 == '3') { *a = 0; *b = 2; }
		}
		break;
		case '2':
		{
			if (wybor2 == '1') { *a = 1; *b = 0; }
			if (wybor2 == '2') { *a = 1; *b = 1; }
			if (wybor2 == '3') { *a = 1; *b = 2; }
		}
		break;
		case '3':
		{
			if (wybor2 == '1') { *a = 2; *b = 0; }
			if (wybor2 == '2') { *a = 2; *b = 1; }
			if (wybor2 == '3') { *a = 2; *b = 2; }
		}
		break;
		default:
			break;
		}
	}

int main()
{
	Duza big;
	Srednia medium;
	Mala small;
	Magazyn magazyn[3][3];
	string stream, a = "1_1.txt", b = "1_2.txt", c = "1_3.txt", a1 = "2_1.txt", b1 = "2_2.txt", c1 = "2_3.txt", a2 = "3_1.txt", b2 = "3_2.txt", c2 = "3_3.txt";
	Palety *wsk;
	char wybor, wybor2;
	int in1=1, in2=1;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			switch (i)
			{
			case 0:
			{
				if (j == 0) stream = a;
				if (j == 1) stream = b;
				if (j == 2) stream = c;
			}
			break;
			case 1:
			{
				if (j == 0) stream = a1;
				if (j == 1) stream = b1;
				if (j == 2) stream = c1;
			}
			break;
			case 2:
			{
				if (j == 0) stream = a2;
				if (j == 1) stream = b2;
				if (j == 2) stream = c2;
			}
			break;
			default: break;
			}
			magazyn[i][j].wczytaj(stream);
		}
	}



	cout << "Co chcesz zrobic? \n 1). Zobacz zawartosc magazynu \n 2). Zobacz zawartosc polki \n 3). Dodaj palete \n";
	cin >> wybor;
	switch (wybor)
	{
	case '1' :
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				switch (i)
				{
				case 0:
				{
					if (j == 0) stream = a;
					if (j == 1) stream = b;
					if (j == 2) stream = c;
				}
				break;
				case 1:
				{
					if (j == 0) stream = a1;
					if (j == 1) stream = b1;
					if (j == 2) stream = c1;
				}
				break;
				case 2:
				{
					if (j == 0) stream = a2;
					if (j == 1) stream = b2;
					if (j == 2) stream = c2;
				}
				break;
				default: break;
				}
				magazyn[i][j].wyswietl(stream);
			}
			cout << endl;
		}
		cout << endl;
	}
	break;
	case '2':
	{
		cout << "Wybierz alejke 1-3 ";
		cin >> wybor;
		cout << "Wybierz polke 1-3 ";
		cin >> wybor2;
		wyborPol(wybor, wybor2, stream, a, b, c, a1, b1, c1, a2, b2, c2);
		indeksy(wybor, wybor2, &in1, &in2);
		cout << "Polka " << in1+1 << "-" << in2+1 << endl;
		magazyn[in1][in2].wyswietl(stream);
	}
	break;
	case '3':
	{
		cout << "Wybierz alejke 1-3 ";
		cin >> wybor;
		cout << "Wybierz polke 1-3 ";
		cin >> wybor2;
		wyborPol(wybor, wybor2,stream, a, b, c, a1, b1, c1, a2, b2, c2);
		cout << "Podaj rozmiar palety(1.)Duza , 2.) Srednia,3.) Mala) :"; //WYBIERANIE ROZMIARU PALETY
		cin >> wybor;
		indeksy(wybor, wybor, &in1, &in2);
		switch (wybor)
		{
		case '1':
		{
			wsk = &big;
		}
		break;
		case '2':
		{
			wsk = &medium;
		}
		break;
		case '3':
		{
			wsk = &small;
		}
		break;
		default: break;
		}
		
		magazyn[in1][in2].dodaj(wsk);
	}
	break;
	default:
		break;
	}
	/////////////////////////////////

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			switch (i)
			{
			case 0:
			{
				if (j == 0) stream = a;
				if (j == 1) stream = b;
				if (j == 2) stream = c;
			}
			break;
			case 1:
			{
				if (j == 0) stream = a1;
				if (j == 1) stream = b1;
				if (j == 2) stream = c1;
			}
			break;
			case 2:
			{
				if (j == 0) stream = a2;
				if (j == 1) stream = b2;
				if (j == 2) stream = c2;
			}
			break;
			default: break;
			}
			magazyn[i][j].zapisz(stream);
		}
	}



	system("pause");
	return 0;
}