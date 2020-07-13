#include "Antena.h"
#include <iostream>
#include <fstream>
#include <qfile.h>


using namespace std;


//konstruktor
Antena::Antena()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor antena" << endl;
#endif
	szerokosc = 5;
	dlugosc = 200;
}
//destruktor
Antena::~Antena()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Antena" << endl;
#endif
	
}

void Antena::wczytaj(fstream & plik)
{
	plik >> *this;
	
}

void Antena::zapis_do_pliku(fstream & plik)
{
	plik << *this;
}

ostream & operator<<(ostream & s, Antena & antena)
{
	s << antena.dlugosc << endl << antena.szerokosc << endl;
	return s;
}

istream & operator>>(istream & s, Antena & antena)
{
	s >> antena.dlugosc >> antena.szerokosc;
	return s;
}
