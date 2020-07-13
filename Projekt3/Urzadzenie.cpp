
#include <iostream>
#include <string>
#include <fstream>
#include "Urzadzenie.h"
#include <qfile.h>

//konstruktor
Urzadzenie::Urzadzenie() {

#ifdef _DEBUG  
	cout << "Wywolano konstruktor Urzadzenie" << endl;
#endif


}
//destruktor
Urzadzenie::~Urzadzenie()
{
#ifdef _DEBUG  
	cout << "Wywolano destruktor ~Urzadzenie" << endl;
#endif
}



string Urzadzenie::wyswietl2()
{
	string tekst1 = to_string(czestotliwosc);
	string tekst2 = to_string(zasieg_sygnalu);
	string tekst3 = to_string(szybkosc_przesylania);
	return "Sila sygnalu: " + si³a_sygna³u + "\n" + "Czestotliwosc: " + tekst1 + " [Ghz]" + "\n" + "Zasieg sygnalu: " + tekst2 + " [km]" + "\n" + "Szybkosc przesylania: " + tekst3 + " [Mb/s]" + "\n";
}


void Urzadzenie::wczytaj(fstream & plik)
{
	plik >> *this;
	
}


void Urzadzenie::zapis_do_pliku(fstream & plik)
{
	plik << *this;
}

std::ostream & operator<<(std::ostream & s, Urzadzenie & urzadzenie)
{
	s << urzadzenie.czestotliwosc << endl << urzadzenie.si³a_sygna³u << endl << urzadzenie.szybkosc_przesylania << endl << urzadzenie.zasieg_sygnalu << endl;
	return s;

}	
std::istream & operator>>(std::istream & s, Urzadzenie & urzadzenie)
{
	s >> urzadzenie.czestotliwosc >> urzadzenie.si³a_sygna³u >> urzadzenie.szybkosc_przesylania  >> urzadzenie.zasieg_sygnalu;
	return s;
}
