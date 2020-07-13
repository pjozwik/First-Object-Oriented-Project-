#include "parametry.h"
#include <iostream>
#include <string>
#include <fstream>
#include <qfile.h>
using namespace std;

//konstruktor
Parametry::Parametry()
{

#ifdef _DEBUG
	cout << "Wywolano konstruktor Parametry" << endl;
#endif


}

//destruktor
Parametry::~Parametry()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor ~Parametry" << endl;
#endif
}



string Parametry::wyswietl2()
{
	string tekst = to_string(ilosc_pamieci_RAM);
	string tekst2 = to_string(ilosc_rdzeni_procesora);
	return "Ilosc pamieci RAM: " + tekst + "\n" + "Ilosc rdzeni procesora: " + tekst2 + "\n";
}

void Parametry::wczytaj(fstream & plik)
{
	plik >> *this;
	
}

void Parametry::zapis_do_pliku(fstream & plik)
{
	plik << *this;
}

ostream & operator<<(ostream & s, Parametry & parametry)
{
	s << parametry.ilosc_pamieci_RAM << endl << parametry.ilosc_rdzeni_procesora << endl;
	return s;
}

istream & operator >> (istream & s, Parametry & parametry)
{
	s >> parametry.ilosc_pamieci_RAM >> parametry.ilosc_rdzeni_procesora;
	return s;
}
