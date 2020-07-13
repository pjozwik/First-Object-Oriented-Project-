#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include "Urzadzenie.h"
#include "parametry.h"
#include "Antena.h"
#include "UrzadzenieTelekomunikacyjne.h"
#include <vector>
#include <qfile.h>



using namespace std;


class Router : public UrzadzenieTelekomunikacyjne {



protected:
	///obiekt klasy parametry
	Parametry parametry;
	///obiekt klasy urzadzenie
	Urzadzenie urzadzenie;
	///wektor znacznikow na klase antena
	vector <Antena*> anteny;
	///zmienna typu int przechowujaca ilosc portow
	int ilosc_portow;
	///zmienna statyczna typu int przechowujaca liczbe stworzonych obiektow
	static int liczba_obiektow;




public:

	///konstruktor domyslny
	Router();
	///konstruktor
	Router(int a);
	///destruktor
	~Router();
	///funkcja zwracaja statyczne pole klasy
	void static wyswietl_ilosc_obiektow();
	///funkcja wyswietlajaca zmienne tej klasy
	string wyswietl();
	///funkcja zmieniajaca nazwe routera
	void zmien_model(string nowy_model);
	///funkcja wysiwetlaja nazwe modelu
	void wyswietl_nazwe_modelu();
	///konstruktor kopiujacy
	Router(const Router &router);
	///operator porownania
	bool operator == (const Router &router);
	///operator mniejszosci
	bool operator < (const Router &router);
	///operator wiekszosci
	bool operator > (const Router &router);
	///operator przypisania
	Router &operator = (const Router &router);
	///operator dodawania
	Router operator + (const Router &router);
	///operator strumieniowy wyjscia
	friend ostream& operator << (ostream &s, Router &router);
	///operator strumieniowy wejscia
	friend istream& operator >> (istream &s1, Router &router);
	///operator preinkrementacji
	Router &operator ++ ();
	///operator predekramentacji
	Router &operator -- ();
	///operator rzutowania
	operator int();
	///operator indeksowania
	Router operator[](int i);
	///funkcja zapisujaca zmienne tej klasy do pliku
	void zapis_do_pliku(fstream &plik);
	///funkcja wczytujaca zmienne tej klasy z pliku
	void wczytaj(fstream &plik);
	///funkcja dodajaca antene routera
	void dodaj_antene(int ilosc_anten_do_dodania);
	///funkcja usuwajaca antene routera
	void usun_antene(int ilosc_anten_do_usuniecia);

	string wyswietl2();
	void zmien_producenta(string nowy_producent);
	void zmien_czestotliwosc(int nowa_czestotliwosc);
	void zmien_sile_sygnalu(string nowa_sila);
	void zien_szybkosc_przesylania(int nowa_szybkosc);
	void zmien_zasieg_sygna³u(int nowy_zasieg);
	void zmien_ilosc_RAM(int nowa_ilosc);
	void zmien_ilosc_rdzenie_procesora(int nowa_ilosc);
	string zwroc_producenta() { return producent; };
	string zwroc_nazwe_modelu() { return nazwa_modelu; };
	int zwroc_czestotliwosc() { return urzadzenie.czestotliwosc; };
	int zwroc_ilosc_rdzenie_procesora() { return parametry.ilosc_rdzeni_procesora; };
	int zwroc_ilosc_pamieci_RAM() { return parametry.ilosc_pamieci_RAM; };
	string zwroc_sile_sygnalu() { return urzadzenie.si³a_sygna³u; };
	int zwroc_szybkosc_przesylania() { return urzadzenie.szybkosc_przesylania; };
	int zwroc_zasieg_sygnalu() { return urzadzenie.zasieg_sygnalu; };


	
	






};