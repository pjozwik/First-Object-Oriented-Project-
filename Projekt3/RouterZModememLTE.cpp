#include "RouterZModememLTE.h"
#include <qfile.h>

std::ostream & operator<<(std::ostream & s, RouterZModememLTE & modem)
{
	s << modem.typ_urzadzenia << endl << modem.producent <<endl << modem.nazwa_modelu << endl << modem.typ_modemu << endl << modem.ilosc_portow  << endl;
	return s;
}

std::istream & operator>>(std::istream & s, RouterZModememLTE & modem)
{
	s  >> modem.producent >> modem.nazwa_modelu >> modem.typ_modemu >>  modem.ilosc_portow;
	return s;
}

RouterZModememLTE::RouterZModememLTE()
{
#ifdef _DEBUG
	cout << "Wywolano konstruktor RouterZModememLTE" << endl;
#endif 

	typ_urzadzenia = "RouterLTE";
	++liczba_obiektow;
	
}

RouterZModememLTE::~RouterZModememLTE()
{
#ifdef _DEBUG
	cout << "Wywolano destruktor RouterZModememLTE" << endl;
#endif 
	--liczba_obiektow;
}


void RouterZModememLTE::wczytaj(fstream & plik)
{
	plik >> *this;
	urzadzenie.wczytaj(plik);
	parametry.wczytaj(plik);
	
	
}

string RouterZModememLTE::wyswietl()
{
	return typ_urzadzenia + "  " + nazwa_modelu;
}

string RouterZModememLTE::wyswietl2()
{
	return "Typ urzadzenia: " + typ_urzadzenia + "\n" + "Producent: " + producent + "\n" + "Nazwa modelu: " + nazwa_modelu + "\n" + "Typ modemu: " + typ_modemu + "\n" + urzadzenie.wyswietl2() + parametry.wyswietl2();
}

void RouterZModememLTE::zapis_do_pliku(fstream & plik)
{
	plik << *this;
	urzadzenie.zapis_do_pliku(plik);
	parametry.zapis_do_pliku(plik);
}

void RouterZModememLTE::zmien_producenta(string nowy_producent)
{
	producent = nowy_producent;
}

void RouterZModememLTE::zmien_model(string nowy_model)
{
	nazwa_modelu = nowy_model;
}

void RouterZModememLTE::zmien_modem(string nowy_modem)
{
	typ_modemu = nowy_modem;
}

void RouterZModememLTE::zmien_czestotliwosc(int nowa_czestotliwosc)
{
	urzadzenie.czestotliwosc = nowa_czestotliwosc;
}

void RouterZModememLTE::zmien_sile_sygnalu(string nowa_sila)
{
	urzadzenie.si³a_sygna³u = nowa_sila;
}

void RouterZModememLTE::zien_szybkosc_przesylania(int nowa_szybkosc)
{
	urzadzenie.szybkosc_przesylania = nowa_szybkosc;
}

void RouterZModememLTE::zmien_zasieg_sygna³u(int nowy_zasieg)
{
	urzadzenie.zasieg_sygnalu = nowy_zasieg;
}

void RouterZModememLTE::zmien_ilosc_RAM(int nowa_ilosc)
{
	parametry.ilosc_pamieci_RAM = nowa_ilosc;
	
}

void RouterZModememLTE::zmien_ilosc_rdzenie_procesora(int nowa_ilosc)
{
	parametry.ilosc_rdzeni_procesora = nowa_ilosc;
}