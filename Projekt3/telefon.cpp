#include "telefon.h"
#include <iostream>
#include <string>
#include <fstream>
#include <qfile.h>
using namespace std;

Telefon::Telefon()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor Telefon" << endl;
#endif 
	typ_urzadzenia = "Telefon";
	
}

Telefon::~Telefon()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor Telefon" << endl;
#endif 
}

string Telefon::wyswietl()
{
	return typ_urzadzenia + "  " + producent + "  " + nazwa_modelu;
}

void Telefon::wczytaj(fstream & plik)
{
	plik >> *this;
	
}

string Telefon::wyswietl2()
{
	string zmienna = to_string(pojemnosc_bateri);
	return"Typ urzadzenia: " + typ_urzadzenia + "\n" + "Producent: " + producent + "\n" + "Nazwa modelu: " + nazwa_modelu + "\n" + "Typ wyswietlacza: " + typ_wysiwetlacza + "\n" + "Pojemnosc bateri: " + zmienna + "\n" ;
}

void Telefon::zmien_typ_wyswietlacza(string nowy_typ)
{
	typ_wysiwetlacza = nowy_typ;
}

void Telefon::zmien_pojemnosc_baterii(int nowa_pojemnosc)
{
	pojemnosc_bateri = nowa_pojemnosc;
}

void Telefon::zmien_model(string nowy_model)
{
	nazwa_modelu = nowy_model;
}

void Telefon::zmien_producenta(string nowy_producent)
{
	producent = nowy_producent;
}

void Telefon::zapis_do_pliku(fstream & plik)
{
	plik << *this;
}

ostream & operator<<(ostream & s, Telefon & telefon)
{
	s << telefon.typ_urzadzenia << endl << telefon.producent << endl << telefon.nazwa_modelu << endl << telefon.pojemnosc_bateri << endl << telefon.typ_wysiwetlacza << endl;
	return s;

}

istream & operator>>(istream & s, Telefon & telefon)
{
	s >> telefon.producent >> telefon.nazwa_modelu >> telefon.pojemnosc_bateri >> telefon.typ_wysiwetlacza;
	return s;
}
