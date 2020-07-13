#include "router.h"
#include <iostream>
#include <vector>
#include <QString>
#include <qfile.h>
using namespace std;

int Router::liczba_obiektow = 0;

//konstruktor domyslny
Router::Router()
{

#ifdef _DEBUG
	cout << "Wywolano domyslny konstruktor Router" << endl;
#endif
	liczba_obiektow++;
	typ_urzadzenia = "Router";
	
}
//konstruktor
Router::Router(int a) {

#ifdef _DEBUG
	cout << "Wywolano konstruktor Router" << endl;
#endif

	liczba_obiektow++;
	
}
//destruktor
Router::~Router()
{

#ifdef _DEBUG
	cout << "Wywolano destruktor ~Router" << endl;
#endif
	--liczba_obiektow;
	

}

string Router::wyswietl()
{
	return typ_urzadzenia + "  " + nazwa_modelu;
}


void Router::wyswietl_ilosc_obiektow() {

	cout << "Liczba stworzonych obiektow: " << liczba_obiektow << endl << endl;
}

Router::Router(const Router & router)
{
	nazwa_modelu = router.nazwa_modelu;
	parametry = router.parametry;
	urzadzenie = router.urzadzenie;
	ilosc_portow = router.ilosc_portow;
	anteny = router.anteny;
		
}




bool Router::operator == (const Router & router)
{
	if (ilosc_portow == router.ilosc_portow)
		return true;
	else
		return false;
}

bool Router::operator < (const Router & router)
{
	if (ilosc_portow < router.ilosc_portow)
		return true;
	else
		return false;
}

bool Router::operator > (const Router & router)
{
	if (ilosc_portow > router.ilosc_portow)
		return true;
	else
		return false;
}

Router & Router::operator = (const Router &router)
{
	nazwa_modelu = router.nazwa_modelu;
	ilosc_portow = router.ilosc_portow;
	urzadzenie = router.urzadzenie;
	parametry = router.parametry;
	anteny = router.anteny;


	return *this;
}

Router  Router::operator + (const Router & router)
{
	Router suma;
	suma.ilosc_portow = router.ilosc_portow + ilosc_portow;

	return suma;
}

Router&  Router::operator -- ()
{
	ilosc_portow--;
	return *this;
}


Router&  Router::operator ++ ()
{
	ilosc_portow++;
	return *this;
}

Router::operator int()
{
	cout << "Po rzutowaniu na int router zwraca ilosc portow" << endl;
	return ilosc_portow;
}

Router Router::operator[](int a)
{
	if (a > 15) cout << "Przekroczona maksymalna ilosc portow: " << endl;
	else ilosc_portow = a;
	return *this;
}

void Router::wczytaj(fstream & plik)
{
	plik >> *this;
	urzadzenie.wczytaj(plik);
	parametry.wczytaj(plik);
	
}

string Router::wyswietl2()
{
	
	return "Typ urzadzenia: " + typ_urzadzenia + "\n" + "Producent: " + producent + "\n" + "Nazwa modelu: " + nazwa_modelu + "\n" + urzadzenie.wyswietl2() + parametry.wyswietl2();
	
}

void Router::zmien_producenta(string nowy_producent)
{
	producent = nowy_producent;
}

void Router::zapis_do_pliku(fstream & plik)
{
	plik << *this;
	urzadzenie.zapis_do_pliku(plik);
	parametry.zapis_do_pliku(plik);
}

ostream& operator << (ostream &s, Router & router)
{
	s << router.typ_urzadzenia << endl << router.producent << endl << router.nazwa_modelu << endl;


	return s;
}

istream & operator >> (istream & s1, Router & router)
{
	
	s1 >> router.producent >> router.nazwa_modelu;
	return s1;
}

void Router::zmien_model(string nowy_model)
{
	nazwa_modelu = nowy_model;
	cout << "Zmieniono nazwe modelu na: " << nowy_model << endl;
}

void Router::wyswietl_nazwe_modelu()
{
	cout << "Nazwa modelu: " << nazwa_modelu << endl;

}

void Router::dodaj_antene(int ilosc_anten_do_dodania)
{
	for (int i = 0; i < ilosc_anten_do_dodania; i++) {
		anteny.push_back(new Antena);
		
	}
}

void Router::usun_antene(int ilosc_anten_do_usuniecia)
{
	for (int i = 0; i < ilosc_anten_do_usuniecia; i++) {
		anteny.pop_back();
	}
}

void Router::zmien_czestotliwosc(int nowa_czestotliwosc)
{
	urzadzenie.czestotliwosc = nowa_czestotliwosc;
}

void Router::zmien_sile_sygnalu(string nowa_sila)
{
	urzadzenie.si³a_sygna³u = nowa_sila;
}

void Router::zien_szybkosc_przesylania(int nowa_szybkosc)
{
	urzadzenie.szybkosc_przesylania = nowa_szybkosc;
}

void Router::zmien_zasieg_sygna³u(int nowy_zasieg)
{
	urzadzenie.zasieg_sygnalu = nowy_zasieg;
}

void Router::zmien_ilosc_RAM(int nowa_ilosc)
{
	parametry.ilosc_pamieci_RAM = nowa_ilosc;
}

void Router::zmien_ilosc_rdzenie_procesora(int nowa_ilosc)
{
	parametry.ilosc_rdzeni_procesora = nowa_ilosc;
}
